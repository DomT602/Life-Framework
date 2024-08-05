////////////////////////////////////////////////////////////////////
//DeRap: D_C\Civilian\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sat Feb 23 03:15:32 2019 : 'file' last modified on Thu Dec 27 11:07:54 2018
////////////////////////////////////////////////////////////////////

#define _ARMA_

class defauLtUserActions;
class DefauLtEventhandlers;
class CfgPatches
{
	class D_Civilian
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_gamma"};
	};
};
class CfgVehicles
{
	class D_Base_Civ_2;
	class D_BapeShorts_F: D_Base_Civ_2
	{
		scope = 2;
		displayName = "Bape Shorts";
		uniformClass = "D_BapeShorts";
		editorSubcategory = "CivilianCategory";
		hiddenSelectionsTextures[] = {"D_C\Civilian\data\Shorts_Bape.paa"};
	};
	class D_HypeBeastShorts_F: D_BapeShorts_F
	{
		displayName = "HypeBeast Shorts";
		uniformClass = "D_HypeBeastShorts";
		hiddenSelectionsTextures[] = {"D_C\Civilian\data\Shorts_HypeBeast.paa"};
	};
	class D_JakePaulShorts_F: D_BapeShorts_F
	{
		displayName = "Disability Shorts";
		uniformClass = "D_JakePaulShorts";
		hiddenSelectionsTextures[] = {"D_C\Civilian\data\Shorts_JakePaul.paa"};
	};
	class D_FeelsBadManShorts_F: D_BapeShorts_F
	{
		displayName = "FeelsBadMan Shorts";
		uniformClass = "D_FeelsBadManShorts";
		hiddenSelectionsTextures[] = {"D_C\Civilian\data\Shorts_FeelsBadMan.paa"};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class D_Base_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Base_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_BapeShorts: Uniform_Base
	{
		scope = 2;
		displayName = "Bape Shorts";
		author = "Jack";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_tricolour_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_BapeShorts_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_HypeBeastShorts: Uniform_Base
	{
		scope = 2;
		displayName = "HypeBeast Shorts";
		author = "Jack";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_tricolour_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_HypeBeastShorts_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_JakePaulShorts: Uniform_Base
	{
		scope = 2;
		displayName = "Disability Shorts";
		author = "Jack";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_tricolour_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_JakePaulShorts_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_FeelsBadManShorts: Uniform_Base
	{
		scope = 2;
		displayName = "FeelsBadMan Shorts";
		author = "Jack";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_tricolour_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_FeelsBadManShorts_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
};
class cfgMods
{
	author = "Happy Panda";
	timepacked = "1545908874";
};
