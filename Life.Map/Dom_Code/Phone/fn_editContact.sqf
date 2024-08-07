/*
	File: fn_editContact.sqf
	Author: Dom
	Description: Edits contacts on the phone
*/
params [
	["_action","",[""]],
	["_data",[],[[]]]
];

if (_action isEqualTo "load") then {
	closeDialog 0;
	createDialog "DT_editContact";
	[phone_appOpen] call DT_fnc_updatePhone;
};
private _display = findDisplay 1037;
private _numberBox = _display displayCtrl 1401;
private _nameBox = _display displayCtrl 1400;
private _notesBox = _display displayCtrl 1402;

switch _action do {
	case "load": {
		_data params ["_number","_name","_notes"];
		uiNamespace setVariable ["origNumber",_number];
		_numberBox ctrlSetText _number;
		_nameBox ctrlSetText _name;
		_notesBox ctrlSetText _notes;
	};
	case "update": {
		private _number = ctrlText _numberBox;
		private _name = ctrlText _nameBox;
		private _notes = ctrlText _notesBox;
		if (_number isEqualTo "" || {count _number != 6}) exitWith {["Invalid number.","orange"] call DT_fnc_notify};
		if (_name isEqualTo "" || {count _name > 50}) exitWith {["Invalid name.","orange"] call DT_fnc_notify};

		private _origNumber = uiNamespace getVariable ["origNumber",""];
		private _index = DT_phoneContacts findIf {_x select 0 isEqualTo _origNumber};
		if (_index isEqualTo -1) then {
			DT_phoneContacts pushBack [_number,_name,_notes];
		} else {
			DT_phoneContacts set [_index,[_number,_name,_notes]];
		};
		profileNamespace setVariable ["DT_phoneContacts",DT_phoneContacts];
		uiNamespace setVariable ["origNumber",_number];
	};
	case "delete": {
		private _origNumber = uiNamespace getVariable ["origNumber",""];
		private _index = DT_phoneContacts findIf {_x select 0 isEqualTo _origNumber};
		if (_index isEqualTo -1) exitWith {["Error.","red"] call DT_fnc_notify};
		closeDialog 0;
		DT_phoneContacts deleteAt _index;
		profileNamespace setVariable ["DT_phoneContacts",DT_phoneContacts];
	};
};