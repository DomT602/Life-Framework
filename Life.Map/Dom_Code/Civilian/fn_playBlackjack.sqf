/*
	File: fn_playBlackjack.sqf
	Author: Dom
	Description: Handles the blackjack game
*/
params [
	["_action","",[""]],
	["_data","",[""]]
];

private _display = findDisplay 1051;
switch _action do {
	case "init": {
		createDialog "DT_blackjack";
		_display = findDisplay 1051;
		private _listbox = _display displayCtrl 1500;
		private _blackjackOptions = getArray(missionConfigFile >> "Misc" >> "casino_blackjackAmounts");
		{
			_listbox lbAdd format ["$%1",_x];
			_listbox lbSetValue [_forEachIndex,_amount];
		} forEach _blackjackOptions;
	};
	case "chooseBetAmount": {
		private _listbox = _display displayCtrl 1500;
		private _index = lbCurSel _listbox;
		private _amount = _listbox lbValue _index;
		if (_amount > player getVariable ["cash",0]) exitWith {["You don't have enough money.","orange"] call DT_fnc_notify};
		uiNamespace setVariable ["betAmount",_amount];
		["cash",-_amount] call DT_fnc_handleMoney;

		(_display displayCtrl -1) ctrlEnable false;
		
		//first cards for both players
		(["chooseRandom","player"] call DT_fnc_playBlackjack) params ["_string"];
		(_display displayCtrl 1200) ctrlSetText format ["\Dom_UI\casino\blackjack\card_%1",_string];
		(["chooseRandom","player"] call DT_fnc_playBlackjack) params ["_string"];
		(_display displayCtrl 1201) ctrlSetText format ["\Dom_UI\casino\blackjack\card_%1",_string];

		(["chooseRandom","dealer"] call DT_fnc_playBlackjack) params ["_string"];
		(_display displayCtrl 1210) ctrlSetText format ["\Dom_UI\casino\blackjack\card_%1",_string];
		(["chooseRandom","dealer"] call DT_fnc_playBlackjack) params ["_string"];
		(_display displayCtrl 1211) ctrlSetText format ["\Dom_UI\casino\blackjack\card_%1",_string];

		(_display displayCtrl -1) ctrlEnable true;
		(_display displayCtrl -1) ctrlEnable true;
	};
	case "chooseRandom": {
		private _cards = [
			[1,"ace"],
			[2,"two"],
			[3,"three"],
			[4,"four"],
			[5,"five"],
			[6,"six"],
			[7,"seven"],
			[8,"eight"],
			[9,"nine"],
			[10,"ten"],
			[10,"jack"],
			[10,"queen"],
			[10,"king"]
		];
		private _suits = ["hearts","spades","diamonds","clubs"];
		
		private _selected = (selectRandom _cards) params ["_value","_string"];
		_string format ["%1_%2",selectRandom _suits,_string];
		private _currentCards = uiNamespace getVariable [format["%1_cards",_data],[]];
		_currentCards pushBack _value;
		uiNamespace setVariable [format["%1_cards",_data],_currentCards];
		[_string,_value];
	};
	case "playerHit": {
		(_display displayCtrl -1) ctrlEnable false;
		(_display displayCtrl -1) ctrlEnable false;
		private _currentCards = uiNamespace getVariable [format["player_cards"],[]];
		private _cardCount = count _currentCards;
		(["chooseRandom","player"] call DT_fnc_playBlackjack) params ["_string"];
		(_display displayCtrl (1200 + _cardCount)) ctrlSetText format ["\Dom_UI\casino\blackjack\card_%1",_string];

		private _lowerTotal = 0;
		private _upperTotal = 0;
		{

			_lowerTotal = _lowerTotal + _x;
			_upperTotal = _upperTotal + _x;
			if (_x isEqualTo 1) then {
				_upperTotal = _upperTotal + 10;
			};
		} forEach _currentCards;

		if (_upperTotal > 21 && _lowerTotal > 21) then {
			["endGame","playerBust"] call DT_fnc_playBlackjack;
		} else {
			["dealerTurn"] call DT_fnc_playBlackjack;
		};
	};
	case "playerStay": {
		(_display displayCtrl -1) ctrlEnable false;
		(_display displayCtrl -1) ctrlEnable false;
		uiNamespace setVariable ["player_action",true];
		["dealerTurn"] call DT_fnc_playBlackjack;
	};
	case "dealerTurn": {
		private _dealerStayed = uiNamespace getVariable ["dealer_action",false];
		private _playerStayed = uiNamespace getVariable ["player_action",false];
		private _currentCards = uiNamespace getVariable [format["dealer_cards"],[]];
		private _cardCount = count _currentCards;
		private _lowerTotal = 0;
		private _upperTotal = 0;
		{

			_lowerTotal = _lowerTotal + _x;
			_upperTotal = _upperTotal + _x;
			if (_x isEqualTo 1) then {
				_upperTotal = _upperTotal + 10;
			};
		} forEach _currentCards;
		private _dealerBest = if (_upperTotal > 21) then {_lowerTotal} else {_lowerTotal max _upperTotal};

		private _playerLowerTotal = 0;
		private _playerUpperTotal = 0;
		{

			_playerLowerTotal = _playerLowerTotal + _x;
			_playerUpperTotal = _playerUpperTotal + _x;
			if (_x isEqualTo 1) then {
				_playerUpperTotal = _playerUpperTotal + 10;
			};
		} forEach (uiNamespace getVariable [format["player_cards"],[]]);
		private _playerBest = if (_playerUpperTotal > 21) then {_playerLowerTotal} else {_playerLowerTotal max _playerUpperTotal};

		if (_dealerBest < _playerBest) then {
			if !(_dealerStayed) then {
				(["chooseRandom","dealer"] call DT_fnc_playBlackjack) params ["_string","_value"];
				(_display displayCtrl (1210 + _cardCount)) ctrlSetText format ["\Dom_UI\casino\blackjack\card_%1",_string];
				_lowerTotal = _lowerTotal + _value;
				if (_value isEqualTo 1) then {_value = 11};
				_upperTotal = _upperTotal + _value;
			};
			if (_lowerTotal > 21 && {_upperTotal > 21}) exitWith {
				["endGame","dealerBust"] call DT_fnc_playBlackjack;
			};
			if (_upperTotal isEqualTo 21 || {_lowerTotal isEqualTo 21}) exitWith {
				["endGame","playerLost"] call DT_fnc_playBlackjack;
			};
			if (_playerStayed) then {
				["dealerTurn"] call DT_fnc_playBlackjack;
			} else {
				(_display displayCtrl -1) ctrlEnable true;
				(_display displayCtrl -1) ctrlEnable true;
			};
		} else {
			if (_playerStayed) then {
				if (_dealerBest isEqualTo _playerBest) then {
					["endGame","playerDraw"] call DT_fnc_playBlackjack;
				} else {
					["endGame","playerLost"] call DT_fnc_playBlackjack;
				};
			} else {
				if (_dealerBest < 17) then {
					(["chooseRandom","dealer"] call DT_fnc_playBlackjack) params ["_string","_value"];
					(_display displayCtrl (1210 + _cardCount)) ctrlSetText format ["\Dom_UI\casino\blackjack\card_%1",_string];
					_lowerTotal = _lowerTotal + _value;
					if (_value isEqualTo 1) then {_value = 11};
					_upperTotal = _upperTotal + _value;
					if (_lowerTotal > 21 && {_upperTotal > 21}) exitWith {
						["endGame","dealerBust"] call DT_fnc_playBlackjack;
					};
					if (_upperTotal isEqualTo 21 || {_lowerTotal isEqualTo 21}) exitWith {
						["endGame","playerLost"] call DT_fnc_playBlackjack;
					};
				} else {
					uiNamespace setVariable ["dealer_action",true];
				};
				(_display displayCtrl -1) ctrlEnable true;
				(_display displayCtrl -1) ctrlEnable true;
			};
		};
	};
	case "endGame": {
		switch _data do {
			case "playerBust": {
				["You went bust and lost your bet.","red"] call DT_fnc_notify;
			};
			case "dealerBust": {
				private _betAmount = uiNamespace setVariable ["betAmount",_amount];
				["The dealer went bust and you won double your bet.","green"] call DT_fnc_notify;
				["cash",(2 * _betAmount)] call DT_fnc_handleMoney;
			};
			case "playerDraw": {
				["It was a draw, therefore you lost your bet.","red"] call DT_fnc_notify;
			};
			case "playerLost": {
				["The dealer won and you lost your bet.","red"] call DT_fnc_notify;
			};
		};
		uiNamespace setVariable ["player_action",false];
		uiNamespace setVariable ["dealer_action",false];
		uiNamespace setVariable ["player_cards",[]];
		uiNamespace setVariable ["dealer_cards",[]];
		uiNamespace setVariable ["betAmount",0];
		for "_i" from 1200 to 1215 do {
			(_display displayCtrl _i) ctrlSetText "";
		};
		(_display displayCtrl -1) ctrlEnable true;
		(_display displayCtrl -1) ctrlEnable false;
		(_display displayCtrl -1) ctrlEnable false;
	};
	case "unload": {
		private _betAmount = uiNamespace getVariable ["betAmount",0];
		if (_betAmount > 0) then {
			["Due to leaving the table during a game, you have forfeit your bet.","red"] call DT_fnc_notify;
		};
	};
};