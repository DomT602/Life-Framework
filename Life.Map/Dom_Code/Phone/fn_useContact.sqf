/*
	File: fn_useContact.sqf
	Author: Dom
	Description: Takes selected number and calls/texts it
*/
params [
	["_call",false,[false]]
];

private _display = findDisplay 1037;
private _numberBox = _display displayCtrl 1401;
private _number = ctrlText _numberBox;
if (_number isEqualTo "") exitWith {["Invalid number.","red"] call DT_fnc_notify};

closeDialog 0;
if (_call) then {
	[_number] call DT_fnc_callNumber;
} else {
	private _index = DT_phoneMessages findIf {_x select 0 isEqualTo _number};
	if (_index isEqualTo -1) exitWith {
		private _display = createDialog ["DT_newMessage",true];
		(_display displayCtrl 1401) ctrlSetText _number;
	};
	private _data = (DT_phoneMessages select _index) select 1;
	[_number,_data] call DT_fnc_seeMessage;
};