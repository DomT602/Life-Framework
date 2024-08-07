/*
	File: fn_updateSettings.sqf
	Author: Dom
	Description: Updates the phone settings
*/

private _display = findDisplay 1039;
private _backgroundCtrl = _display displayCtrl 2100;
private _ringtonesCtrl = _display displayCtrl 2101;
private _slider = _display displayCtrl 1900;

DT_phoneBackground = _backgroundCtrl lbData (lbCurSel _backgrounds);
DT_phoneRingtone = _ringtonesCtrl lbData (lbCurSel _ringtone);
DT_phoneVolume = floor(sliderPosition _slider);

[call TFAR_fnc_ActiveSWRadio,DT_phoneVolume] call TFAR_fnc_setSwVolume;

profileNamespace setVariable ["DT_phoneSettings",[DT_phoneBackground,DT_phoneRingtone,DT_phoneVolume]];
["Settings updated.","green"] call DT_fnc_notify;