class defaultUserActions;
class DefaultEventhandlers;
class CfgPatches
{
	class D_PoliceVest
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F_TruckHeavy","A3_Weapons_F_Ammoboxes","a3_weapons_f_beta_ammoboxes","A3_Soft_F_SUV","A3_Soft_F","A3_Characters_F_INDEP","A3_Characters_F_BLUFOR","A3_Soft_F_MRAP_01","A3_Air_F_Beta_Heli_Transport_02","A3_Air_F_Heli_Light_01","A3_Armor_F_AMV","A3_Soft_F_Offroad_01"};
	};
};
class cfgWeapons
{
	class ItemCore;
	class iteminfo;
	class Vest_Camo_Base;
	class U_B_CombatUniform_mcam_vest;
	class vest_base;
	class VestItem;
	class PoliceVest: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Police Duty Vest";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "D_C\Models\PoliceVest\PoliceVest.p3d";
		descriptionShort = "$STR_A3_SP_AL_V";
		class ItemInfo: VestItem
		{
			uniformModel = "D_C\Models\PoliceVest\PoliceVest.p3d";
			containerClass = "Supply80";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 35;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 35;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
};