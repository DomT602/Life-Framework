/*
	File: fn_initInbox.sqf
	Author: Dom
	Description: Initiliases the message inbox
*/

private _display = createDialog ["DT_messages",true];
[phone_appOpen] call DT_fnc_updatePhone;
private _controlGroup = _display displayCtrl 2300;
(ctrlPosition _controlGroup) params ["_xPos","_yPos","_width","_length"];

private _pos = 0;

{
	_x params ["_number","_messages"];
	private _lastMessage = (_messages select (count _messages - 1)) select 1;
	private _name = [_number] call DT_fnc_findContact;
	private _control = _display ctrlCreate ["RscPhoneText",-1,_controlGroup];
	
	_control ctrlSetStructuredText parseText format["%1<br/>%2",_name,_lastMessage];
	_control ctrlSetPosition [0,_pos,_width,ctrlTextHeight _control];
	_control ctrlCommit 0;
	
	_control ctrlAddEventHandler ["mouseButtonDown",format["%1 call DT_fnc_seeMessage",_x]];
	_control ctrlSetBackgroundColor [0,0,0,0.3];
	_pos = ((ctrlPosition _control) select 1) + ((ctrlPosition _control) select 3) + 0.01;
} forEach DT_phoneMessages;