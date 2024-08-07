/*
	File: fn_initSettings.sqf
	Author: Dom
	Description: Initiliases the settings menu
*/

private _display = createDialog ["DT_settings",true];
[phone_appOpen] call DT_fnc_updatePhone;
private _backgroundCtrl = _display displayCtrl 2100;
private _ringtonesCtrl = _display displayCtrl 2101;
private _slider = _display displayCtrl 1900;

private _backgroundList = [
	"1","2","Postman Pat","Police","Charger","Riot Police","LOL","Adidas","Space","GTA","Nyan Cat","Constellations","Planets","Galaxy Sloth","CSGO","Space2","Monkey :)","Jack"
];
private _ringToneList = [
	["test",""]
];

{
	private _index = _backgroundCtrl lbAdd _x;
	private _path = format["\Dom_UI\phone\backgrounds\background%1.paa",_index + 1];
	_backgroundCtrl lbSetData [_index,_path];

	if (_path == DT_phoneBackground) then {
		_backgroundCtrl lbSetCurSel _index;
	};
} forEach _backgroundList;
private _curBG = parseNumber (_currentBackground select [36,2]);
_backgroundCtrl lbSetCurSel (_curBG - 1);

{
	_x params ["_name","_path"];
	private _index = _ringtonesCtrl lbAdd _name;
	_ringtonesCtrl lbSetData [_index,_path];
	
	if (_path == DT_phoneRingtone) then {
		_ringtonesCtrl lbSetCurSel _index;
	};
} forEach _ringToneList;

_slider sliderSetRange [0,10];
_slider sliderSetSpeed [1,1];
_slider sliderSetPosition DT_phoneVolume;