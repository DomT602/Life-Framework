////////////////////////////////////////////////////////////////////
//DeRap: D_C\FireRescue\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sat Feb 23 03:15:33 2019 : 'file' last modified on Thu Dec 27 11:07:54 2018
////////////////////////////////////////////////////////////////////

#define _ARMA_

class defauLtUserActions;
class DefaultEventhandlers;
class CfgPatches
{
	class D_FireRescue
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_gamma"};
	};
};
class CfgVehicles
{
	class D_Base_Medic;
	class B_Soldier_Survival_F;
	class D_FireRescue_Uni_Probie_F: D_Base_Medic
	{
		scope = 2;
		displayName = "EMS Probie";
		picture = "\D_C\data\icon_Police_ca.paa";
		editorSubcategory = "MedicCategory";
		uniformClass = "D_FireRescue_Uni_Probie";
		hiddenSelectionsTextures[] = {"\D_C\FireRescue\Data\FireRescue_Uni_Probie.paa"};
	};
	class D_FireRescue_Uni_EMT_F: D_FireRescue_Uni_Probie_F
	{
		displayName = "EMS Junior EMT";
		uniformClass = "D_FireRescue_Uni_EMT";
		hiddenSelectionsTextures[] = {"\D_C\FireRescue\Data\FireRescue_Uni_EMT.paa"};
	};
	class D_FireRescue_Uni_EMTYellow_F: D_FireRescue_Uni_Probie_F
	{
		displayName = "EMS Junior EMT (Yellow Stripes)";
		uniformClass = "D_FireRescue_Uni_EMTYellow";
		hiddenSelectionsTextures[] = {"\D_C\FireRescue\Data\FireRescue_Uni_EMTYellow.paa"};
	};
	class D_FireRescue_Uni_SeniorEMT_F: D_FireRescue_Uni_Probie_F
	{
		displayName = "EMS Senior EMT";
		uniformClass = "D_FireRescue_Uni_EMT";
		hiddenSelectionsTextures[] = {"\D_C\FireRescue\Data\FireRescue_Uni_SeniorEMT.paa"};
	};
	class D_FireRescue_Uni_SeniorEMTYellow_F: D_FireRescue_Uni_Probie_F
	{
		displayName = "EMS Senior EMT (Yellow Stripes)";
		uniformClass = "D_FireRescue_Uni_SeniorEMTYellow";
		hiddenSelectionsTextures[] = {"\D_C\FireRescue\Data\FireRescue_Uni_SeniorEMTYellow.paa"};
	};
	class D_FireRescue_Uni_Command_F: D_FireRescue_Uni_Probie_F
	{
		displayName = "EMS Command";
		uniformClass = "D_FireRescue_Uni_Command";
		hiddenSelectionsTextures[] = {"\D_C\FireRescue\Data\FireRescue_Uni_Command.paa"};
	};
	class D_FireRescue_Uni_Diving_F: B_Soldier_Survival_F
	{
		scope = 1;
		model = "\A3\characters_f_epa\BLUFOR\b_soldier_survival_01.p3d";
		picture = "\D_C\data\icon_Police_ca.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"D_C\FireRescue\Data\FireRescue_Uni_Diving.paa","D_C\data\diver_equip_ctrg_co.paa"};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class D_FireRescue_Uni_Probie: Uniform_Base
	{
		scope = 2;
		displayName = "EMS Probie";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_FireRescue_Uni_Probie_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_FireRescue_Uni_EMT: Uniform_Base
	{
		scope = 2;
		displayName = "EMS Junior EMT";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_FireRescue_Uni_EMT_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_FireRescue_Uni_EMTYellow: Uniform_Base
	{
		scope = 2;
		displayName = "EMS Junior EMT (Yellow Stripes)";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_FireRescue_Uni_EMTYellow_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_FireRescue_Uni_SeniorEMT: Uniform_Base
	{
		scope = 2;
		displayName = "EMS Senior EMT";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_FireRescue_Uni_SeniorEMT_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_FireRescue_Uni_SeniorEMTYellow: Uniform_Base
	{
		scope = 2;
		displayName = "EMS Senior EMT (Yellow Stripes)";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_FireRescue_Uni_SeniorEMTYellow_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_FireRescue_Uni_Command: Uniform_Base
	{
		scope = 2;
		displayName = "EMS Command";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_FireRescue_Uni_Command_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_FireRescue_Uni_Diving: Uniform_Base
	{
		scope = 2;
		descriptionshort = "Diving Gear";
		displayName = "EMS Diving Gear";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"D_C\FireRescue\Data\FireRescue_Uni_Diving.paa","D_C\data\diver_equip_ctrg_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_FireRescue_Uni_Diving_F";
			uniformType = "Neopren";
			containerClass = "Supply80";
			mass = 10;
			allowedSlots[] = {"701","801","901"};
			armor = 10;
		};
	};
	class V_Safety_base_F;
	class D_Safety_Yellow_EMS: V_Safety_base_F
	{
		author = "Jack";
		scope = 2;
		displayName = "EMS Ridealong Vest";
		picture = "D_C\data\V_Safety\icon_V_Safety_yellow_CA.paa";
		hiddenSelectionsTextures[] = {"D_C\Police\data\Police_Vest_Ridealong.paa"};
	};
};
class cfgMods
{
	author = "Happy Panda";
	timepacked = "1545908874";
};
