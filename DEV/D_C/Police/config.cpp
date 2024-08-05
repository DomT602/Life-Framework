////////////////////////////////////////////////////////////////////
//DeRap: D_C\Police\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sat Feb 23 03:15:34 2019 : 'file' last modified on Thu Dec 27 11:07:55 2018
////////////////////////////////////////////////////////////////////

#define _ARMA_

class defauLtUserActions;
class DefaultEventhandlers;
class CfgPatches
{
	class D_Police
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_gamma"};
	};
};
class CfgVehicles
{
	class B_CTRG_Soldier_F;
	class D_Base_Cop;
	class D_Base_Civ_3;
	class D_Police_Cadet_F: D_Base_Cop
	{
		scope = 2;
		displayName = "Police Cadet";
		picture = "\D_C\data\icon_Police_ca.paa";
		editorSubcategory = "PoliceCategory";
		uniformClass = "D_Police_Cadet";
		hiddenSelectionsTextures[] = {"\D_C\Police\Data\u_police1.paa"};
	};
	class D_Police_Officer_F: D_Police_Cadet_F
	{
		displayName = "Police Officer";
		uniformClass = "D_Police_Officer";
		hiddenSelectionsTextures[] = {"\D_C\Police\Data\u_police2.paa"};
	};
	class D_Police_Corporal_F: D_Police_Cadet_F
	{
		displayName = "Police Corporal";
		uniformClass = "D_Police_Corporal";
		hiddenSelectionsTextures[] = {"\D_C\Police\Data\u_police3.paa"};
	};
	class D_Police_CorporalFTO_F: D_Police_Cadet_F
	{
		displayName = "Police Corporal FTO";
		uniformClass = "D_Police_CorporalFTO";
		hiddenSelectionsTextures[] = {"\D_C\Police\Data\u_police4.paa"};
	};
	class D_Police_Sergeant_F: D_Police_Cadet_F
	{
		displayName = "Police Sergeant";
		uniformClass = "D_Police_Sergeant";
		hiddenSelectionsTextures[] = {"\D_C\Police\Data\u_police5.paa"};
	};
	class D_Police_Lieutenant_F: D_Police_Cadet_F
	{
		displayName = "Police Lieutenant";
		uniformClass = "D_Police_Lieutenant";
		hiddenSelectionsTextures[] = {"\D_C\Police\Data\u_police6.paa"};
	};
	class D_Police_Captain_F: D_Police_Cadet_F
	{
		displayName = "Police Captain";
		uniformClass = "D_Police_Captain";
		hiddenSelectionsTextures[] = {"\D_C\Police\Data\u_police7.paa"};
	};
	class D_Police_Major_F: D_Police_Cadet_F
	{
		displayName = "Police Major";
		uniformClass = "D_Police_Major";
		hiddenSelectionsTextures[] = {"\D_C\Police\Data\u_police8.paa"};
	};
	class D_Police_AsstChief_F: D_Police_Cadet_F
	{
		displayName = "Police Assistant Chief";
		uniformClass = "D_Police_AsstChief";
		hiddenSelectionsTextures[] = {"\D_C\Police\Data\u_police9.paa"};
	};
	class D_Police_Chief_F: D_Police_Cadet_F
	{
		displayName = "Police Chief";
		uniformClass = "D_Police_Chief";
		hiddenSelectionsTextures[] = {"\D_C\Police\Data\u_police10.paa"};
	};
	class D_SWAT_Uni_Tactical_F: B_CTRG_Soldier_F
	{
		displayName = "Police SWAT Uniform";
		uniformClass = "D_SWAT_Uni_Tactical";
		hiddenSelectionsTextures[] = {"\D_C\Police\data\SWAT_Uni_Tactical.paa"};
	};
	class D_Police_Uni_Diving_F: D_Base_Civ_3
	{
		scope = 2;
		displayName = "Police Diving Gear";
		picture = "\D_C\data\icon_Police_ca.paa";
		editorSubcategory = "PoliceCategory";
		hiddenSelectionsTextures[] = {"D_C\Police\Data\Police_Uni_Diving.paa","D_C\data\diver_equip_ctrg_co.paa"};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class D_Police_Cadet: Uniform_Base
	{
		scope = 2;
		displayName = " Police Cadet";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_Cadet_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Police_Officer: Uniform_Base
	{
		scope = 2;
		displayName = " Police Officer";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_Officer_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Police_Corporal: Uniform_Base
	{
		scope = 2;
		displayName = " Police Corporal";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_Corporal_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Police_CorporalFTO: Uniform_Base
	{
		scope = 2;
		displayName = " Police Corporal FTO";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_CorporalFTO_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Police_Sergeant: Uniform_Base
	{
		scope = 2;
		displayName = " Police Sergeant";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_Sergeant_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Police_Lieutenant: Uniform_Base
	{
		scope = 2;
		displayName = " Police Lieutenant";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_Lieutenant_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Police_Captain: Uniform_Base
	{
		scope = 2;
		displayName = " Police Captain";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_Captain_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Police_Major: Uniform_Base
	{
		scope = 2;
		displayName = " Police Major";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_Major_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Police_AsstChief: Uniform_Base
	{
		scope = 2;
		displayName = " Police Assistant Chief";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_AsstChief_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_Police_Chief: Uniform_Base
	{
		scope = 2;
		displayName = " Police Chief";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_Chief_F";
			containerClass = "Supply50";
			mass = 10;
		};
	};
	class D_SWAT_Uni_Tactical: Uniform_Base
	{
		scope = 2;
		displayName = " Police SWAT Uniform";
		picture = "\D_C\data\icon_Police_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_SWAT_Uni_Tactical_F";
			containerClass = "Supply100";
			mass = 10;
		};
	};
	class D_Police_Uni_Diving: Uniform_Base
	{
		scope = 2;
		descriptionshort = "Diving Gear";
		displayName = " Police Diving Gear";
		picture = "\D_C\data\icon_Police_ca.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"D_C\Police\Data\Police_Uni_Diving.paa","D_C\data\diver_equip_ctrg_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "D_Police_Uni_Diving_F";
			uniformType = "Neopren";
			containerClass = "Supply80";
			mass = 10;
			allowedSlots[] = {"701","801","901"};
			armor = 10;
		};
	};
	class V_PlateCarrier1_rgr;
	class V_Safety_base_F;
	class InventoryItem_Base_F;
	class VestItem: InventoryItem_Base_F{};
	class D_Safety_Yellow_Police: V_Safety_base_F
	{
		author = "Jack";
		scope = 2;
		displayName = "Police RideAlong Vest";
		picture = "D_C\data\V_Safety\icon_V_Safety_yellow_CA.paa";
		hiddenSelectionsTextures[] = {"D_C\Police\data\Police_Vest_Ridealong.paa"};
	};
	class D_Base_Vest: V_PlateCarrier1_rgr
	{
		scope = 2;
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"D_C\Police\data\Police_Vest_SWAT.paa"};
		displayName = "SWAT Vest";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply120";
			mass = 50;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.2;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 20;
					passThrough = 0.2;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20;
					passThrough = 0.2;
				};
			};
		};
	};
	class D_Police_Vest_Carrier: D_Base_Vest
	{
		hiddenSelectionsTextures[] = {"D_C\Police\data\Police_Vest_Carrier.paa"};
		displayName = "Police High Threat Vest";
	};
	class ItemCore;
	class HeadgearItem;
	class H_Cap_blk;
	class H_HelmetIA;
	class H_HelmetB;
	class H_Beret_02;
	class H_Cap_cappatch_default;
	class D_SWAT_Hat_Heavy: H_HelmetB
	{
		scope = 2;
		displayName = "SWAT Helmet";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"D_C\Police\data\SWAT_Hat_Heavy.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 10;
					passThrough = 0.2;
				};
			};
		};
	};
	class D_Hat_Police: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Police Cap";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\D_C\Models\Cap\cap_patch.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"D_C\Police\data\Police_Hat_Base","\D_C\Police\data\Police_Hat_Police.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\D_C\Models\Cap\cap_patch.p3d";
			hiddenSelections[] = {"camo1","camo2"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 15;
			passThrough = 1;
		};
	};
	class D_Hat_SWAT: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Police SWAT Cap";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\D_C\Models\Cap\cap_patch.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"D_C\Police\data\Police_Hat_Base","\D_C\Police\data\Police_Hat_SWAT.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\D_C\Models\Cap\cap_patch.p3d";
			hiddenSelections[] = {"camo1","camo2"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 15;
			passThrough = 1;
		};
	};
	class D_Hat_DTU: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Police DTU Cap";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\D_C\Models\Cap\cap_patch.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"A3\Characters_F\Common\Data\capb_us_co.paa","\D_C\Police\data\Police_Hat_DTU.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\D_C\Models\Cap\cap_patch.p3d";
			hiddenSelections[] = {"camo1","camo2"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 15;
			passThrough = 1;
		};
	};
	class D_HatBack_Police: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Police Cap";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\D_C\Models\Cap\capBack_patch.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"D_C\Police\data\Police_Hat_Base","\D_C\Police\data\Police_Hat_Police.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\D_C\Models\Cap\capBack_patch.p3d";
			hiddenSelections[] = {"camo1","camo2"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 15;
			passThrough = 1;
		};
	};
	class D_HatBack_SWAT: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Police SWAT Cap";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\D_C\Models\Cap\capBack_patch.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"D_C\Police\data\Police_Hat_Base","\D_C\Police\data\Police_Hat_SWAT.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\D_C\Models\Cap\capBack_patch.p3d";
			hiddenSelections[] = {"camo1","camo2"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 15;
			passThrough = 1;
		};
	};
	class D_HatBack_DTU: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Police DTU Cap";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\D_C\Models\Cap\capBack_patch.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"A3\Characters_F\Common\Data\capb_us_co.paa","\D_C\Police\data\Police_Hat_DTU.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\D_C\Models\Cap\capBack_patch.p3d";
			hiddenSelections[] = {"camo1","camo2"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 15;
			passThrough = 1;
		};
	};
	class D_Beret_CID: H_Beret_02
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "CID Beret";
		picture = "\D_C\data\icon_Police_ca.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\D_C\Police\data\Police_Hat_CID_B.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = 15;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
};
class cfgGlasses
{
	class G_Balaclava_TI_blk_F;
	class D_SWAT_Bala_Stealth: G_Balaclava_TI_blk_F
	{
		author = "Arma 3: Life";
		displayName = "SWAT Stealth Balaclava";
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"D_C\Police\data\SWAT_Bala_Stealth.paa"};
		mass = 10;
	};
};
class cfgMods
{
	author = "Happy Panda";
	timepacked = "1545908874";
};
