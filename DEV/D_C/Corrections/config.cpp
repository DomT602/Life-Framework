////////////////////////////////////////////////////////////////////
//DeRap: D_C\Corrections\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sat Feb 23 03:15:32 2019 : 'file' last modified on Thu Dec 27 11:07:54 2018
////////////////////////////////////////////////////////////////////

#define _ARMA_

class defauLtUserActions;
class DefaultEventhandlers;
class CfgPatches
{
	class D_Corrections
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_gamma"};
	};
};
class CfgVehicles
{
	class D_Base_Cop;
	class D_Corrections_Cadet_F: D_Base_Cop
	{
		scope = 2;
		displayName = "Corrections Cadet";
		editorSubcategory = "CorrectionsCategory";
		uniformClass = "D_Corrections_Cadet";
		picture = "\D_C\data\icon_Corrections_ca.paa";
		hiddenSelectionsTextures[] = {"\D_C\Corrections\Data\u_corrections1.paa"};
	};
	class D_Corrections_Officer_F: D_Corrections_Cadet_F
	{
		displayName = "Corrections Officer";
		uniformClass = "D_Corrections_Officer";
		hiddenSelectionsTextures[] = {"\D_C\Corrections\Data\u_corrections2.paa"};
	};
	class D_Corrections_Corporal_F: D_Corrections_Cadet_F
	{
		displayName = "Corrections Corporal";
		uniformClass = "D_Corrections_Corporal";
		hiddenSelectionsTextures[] = {"\D_C\Corrections\Data\u_corrections3.paa"};
	};
	class D_Corrections_CorporalFTO_F: D_Corrections_Cadet_F
	{
		displayName = "Corrections Corporal FTO";
		uniformClass = "D_Corrections_CorporalFTO";
		hiddenSelectionsTextures[] = {"\D_C\Corrections\Data\u_corrections4.paa"};
	};
	class D_Corrections_Sergeant_F: D_Corrections_Cadet_F
	{
		displayName = "Corrections Sergeant";
		uniformClass = "D_Corrections_Sergeant";
		hiddenSelectionsTextures[] = {"\D_C\Corrections\Data\u_corrections5.paa"};
	};
	class D_Corrections_Lieutenant_F: D_Corrections_Cadet_F
	{
		displayName = "Corrections Lieutenant";
		uniformClass = "D_Corrections_Lieutenant";
		hiddenSelectionsTextures[] = {"\D_C\Corrections\Data\u_corrections6.paa"};
	};
	class D_Corrections_Captain_F: D_Corrections_Cadet_F
	{
		displayName = "Corrections Captain";
		uniformClass = "D_Corrections_Captain";
		hiddenSelectionsTextures[] = {"\D_C\Corrections\Data\u_corrections7.paa"};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class D_Corrections_Cadet: Uniform_Base
	{
		scope = 2;
		displayName = " Corrections Cadet";
		picture = "\D_C\data\icon_Corrections_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Corrections_Cadet_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Corrections_Officer: Uniform_Base
	{
		scope = 2;
		displayName = " Corrections Officer";
		picture = "\D_C\data\icon_Corrections_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Corrections_Officer_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Corrections_Corporal: Uniform_Base
	{
		scope = 2;
		displayName = " Corrections Corporal";
		picture = "\D_C\data\icon_Corrections_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Corrections_Corporal_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Corrections_CorporalFTO: Uniform_Base
	{
		scope = 2;
		displayName = " Corrections Corporal FTO";
		picture = "\D_C\data\icon_Corrections_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Corrections_CorporalFTO_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Corrections_Sergeant: Uniform_Base
	{
		scope = 2;
		displayName = " Corrections Sergeant";
		picture = "\D_C\data\icon_Corrections_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Corrections_Sergeant_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Corrections_Lieutenant: Uniform_Base
	{
		scope = 2;
		displayName = " Corrections Lieutenant";
		picture = "\D_C\data\icon_Corrections_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Corrections_Lieutenant_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Corrections_Captain: Uniform_Base
	{
		scope = 2;
		displayName = " Corrections Captain";
		picture = "\D_C\data\icon_Corrections_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Corrections_Captain_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Base_Vest;
	class D_Corrections_Vest: D_Base_Vest
	{
		hiddenSelectionsTextures[] = {"D_C\Corrections\data\Corrections_Vest_Carrier.paa"};
		displayName = "Corrections High Threat Vest";
	};
	class ItemCore;
	class HeadgearItem;
	class D_Hat_Corrections: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = " Corrections Campaign Hat";
		model = "\D_C\Models\CampaignHat\Campaign_Hat.p3d";
		picture = "\D_C\data\icon_Corrections_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"D_C\Corrections\data\h_correctionsufo.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\D_C\Models\CampaignHat\Campaign_Hat.p3d";
			hiddenSelections[] = {"camo"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 15;
			passThrough = 1;
		};
	};
};
class cfgMods
{
	author = "Happy Panda";
	timepacked = "1545908874";
};
