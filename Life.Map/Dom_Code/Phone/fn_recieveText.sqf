/*
	File: fn_recieveText.sqf
	Author: Dom
	Description: Recieves a text message
*/
params [
	["_message","",[""]],
	["_incNumber","",[""]],
	["_emergency",false,[false]],
	["_sender","",[""]]
];
if (_message isEqualTo "" || {_incNumber isEqualTo ""}) exitWith {};

date params ["_year","_month","_day","_hour","_minute"];
_message = if (_emergency) then {
	format["911: %1-%2-%3 | %4:%5<br/>%6",_day,_month,_year,_hour,_minute,_message];
} else {
	format["%1-%2-%3 | %4:%5<br/>%6",_day,_month,_year,_hour,_minute,_message];
};

private _index = DT_phoneMessages findIf {_x select 0 isEqualTo _incNumber};
if (_index isEqualTo -1) then {
	DT_phoneMessages pushBack [_incNumber,[[false,_message]]];
} else {
	(DT_phoneMessages select _index) params ["","_messages"];
	_messages pushBack [false,_message];
};

if (!([player] call TFAR_fnc_hasRadio) || (player getVariable ["phoneBattery",100]) isEqualTo 0) exitWith {};

private _name = [_number] call DT_fnc_findContact;
[_name,_message] call DT_fnc_popupPhone;

if (DT_phoneRingtone isNotEqualTo "") then {
	[player,["buzz",50,1]] remoteExecCall ["say3D",-2];
};

if !(isNull (findDisplay 1035)) then {
	private _pos = uiNamespace getVariable ["height",0];
	private _display = findDisplay 1035;
	private _controlGroup = _display displayCtrl 2300;
	(ctrlPosition _controlGroup) params ["_xPos","_yPos","_width","_length"];
	private _control = _display ctrlCreate ["RscPhoneText",-1,_controlGroup];
	_control ctrlSetStructuredText parseText _message;
	_control ctrlSetPosition [0,_pos,(_width / 2),(ctrlTextHeight _control)];
	_control ctrlCommit 0;
	_control ctrlSetPosition [0,_pos,(_width / 2),(ctrlTextHeight _control)];
	_control ctrlCommit 0;
	_control ctrlSetBackgroundColor [0,1,0,1];
	_pos = ((ctrlPosition _control) select 1) + ((ctrlPosition _control) select 3) + 0.01;
	uiNamespace setVariable ["height",_pos];
};