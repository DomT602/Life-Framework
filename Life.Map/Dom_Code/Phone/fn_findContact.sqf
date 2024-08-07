/*
	File: fn_findContact.sqf
	Author: Dom
	Description: Finds a contact's name
*/
params [
	["_number","",[""]]
];

private _index = DT_phoneContacts findIf {_x select 0 isEqualTo _number};

private _return = if (_index isNotEqualTo -1) then {
	(DT_phoneContacts select _index) select 1;
} else {
	_number;
};

_return;