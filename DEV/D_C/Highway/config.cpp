////////////////////////////////////////////////////////////////////
//DeRap: D_C\Highway\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sat Feb 23 03:15:33 2019 : 'file' last modified on Thu Dec 27 11:07:54 2018
////////////////////////////////////////////////////////////////////

#define _ARMA_

class defauLtUserActions;
class DefaultEventhandlers;
class CfgPatches
{
	class D_Highway
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
	class D_Highway_Cadet_F: D_Base_Cop
	{
		scope = 2;
		displayName = "Highway Patrol Cadet";
		editorSubcategory = "HighwayCategory";
		uniformClass = "D_Highway_Cadet";
		picture = "\D_C\data\icon_Highway_ca.paa";
		hiddenSelectionsTextures[] = {"\D_C\Highway\Data\u_highway1.paa"};
	};
	class D_Highway_Officer_F: D_Highway_Cadet_F
	{
		displayName = "Highway Patrol Officer";
		uniformClass = "D_Highway_Officer";
		hiddenSelectionsTextures[] = {"\D_C\Highway\Data\u_highway2.paa"};
	};
	class D_Highway_Corporal_F: D_Highway_Cadet_F
	{
		displayName = "Highway Patrol Corporal";
		uniformClass = "D_Highway_Corporal";
		hiddenSelectionsTextures[] = {"\D_C\Highway\Data\u_highway3.paa"};
	};
	class D_Highway_CorporalFTO_F: D_Highway_Cadet_F
	{
		displayName = "Highway Patrol Corporal FTO";
		uniformClass = "D_Highway_CorporalFTO";
		hiddenSelectionsTextures[] = {"\D_C\Highway\Data\u_highway4.paa"};
	};
	class D_Highway_Sergeant_F: D_Highway_Cadet_F
	{
		displayName = "Highway Patrol Sergeant";
		uniformClass = "D_Highway_Sergeant";
		hiddenSelectionsTextures[] = {"\D_C\Highway\Data\u_highway5.paa"};
	};
	class D_Highway_Lieutenant_F: D_Highway_Cadet_F
	{
		displayName = "Highway Patrol Lieutenant";
		uniformClass = "D_Highway_Lieutenant";
		hiddenSelectionsTextures[] = {"\D_C\Highway\Data\u_highway6.paa"};
	};
	class D_Highway_Captain_F: D_Highway_Cadet_F
	{
		displayName = "Highway Patrol Captain";
		uniformClass = "D_Highway_Captain";
		hiddenSelectionsTextures[] = {"\D_C\Highway\Data\u_highway7.paa"};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class D_Highway_Cadet: Uniform_Base
	{
		scope = 2;
		displayName = " Highway Patrol Cadet";
		picture = "\D_C\data\icon_Highway_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Highway_Cadet_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Highway_Officer: Uniform_Base
	{
		scope = 2;
		displayName = " Highway Patrol Officer";
		picture = "\D_C\data\icon_Highway_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Highway_Officer_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Highway_Corporal: Uniform_Base
	{
		scope = 2;
		displayName = " Highway Patrol Corporal";
		picture = "\D_C\data\icon_Highway_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Highway_Corporal_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Highway_CorporalFTO: Uniform_Base
	{
		scope = 2;
		displayName = " Highway Patrol Corporal FTO";
		picture = "\D_C\data\icon_Highway_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Highway_CorporalFTO_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Highway_Sergeant: Uniform_Base
	{
		scope = 2;
		displayName = " Highway Patrol Sergeant";
		picture = "\D_C\data\icon_Highway_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Highway_Sergeant_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Highway_Lieutenant: Uniform_Base
	{
		scope = 2;
		displayName = " Highway Patrol Lieutenant";
		picture = "\D_C\data\icon_Highway_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Highway_Lieutenant_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Highway_Captain: Uniform_Base
	{
		scope = 2;
		displayName = " Highway Patrol Captain";
		picture = "\D_C\data\icon_Highway_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Highway_Captain_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Base_Vest;
	class D_Highway_Vest: D_Base_Vest
	{
		hiddenSelectionsTextures[] = {"D_C\Highway\data\Highway_Vest_Carrier.paa"};
		displayName = "Highway Patrol High Vest";
	};
	class ItemCore;
	class HeadgearItem;
	class D_Hat_Highway: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = " Highway Campaign Hat";
		model = "\D_C\Models\CampaignHat\Campaign_Hat.p3d";
		picture = "\D_C\data\icon_Highway_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"D_C\Highway\data\h_highwayufo.paa"};
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
