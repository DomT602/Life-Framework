#define _ARMA_
class CfgPatches
{
	class D_HockeyMasks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_gamma"};
	};
};
class cfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class D_Hockey_Mask_4_STEEL: ItemCore
	{
		author = "Noah Rebel";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[A3L] Hockey Mask (Steel)";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
		model = "\D_C\Models\HockeyMask\Hockey_Mask_4.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\D_C\Models\HockeyMask\data\Hockey_Mask_4_STEEL_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\D_C\Models\HockeyMask\Hockey_Mask_4.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
		};
	};
	class D_Hockey_Mask_4_CIRCUIT: D_Hockey_Mask_4_STEEL
	{
		displayName = "[A3L] Hockey Mask (Circuit)";
		author = "Noah Rebel";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\D_C\Models\HockeyMask\data\Hockey_Mask_4_CIRCUIT_CO.paa"};
	};
	class D_Hockey_Mask_4_CARBON: D_Hockey_Mask_4_STEEL
	{
		displayName = "[A3L] Hockey Mask (Carbon)";
		author = "Noah Rebel";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\D_C\Models\HockeyMask\data\Hockey_Mask_4_CARBON_CO.paa"};
	};
	class D_Hockey_Mask_4_LIGHTNING: D_Hockey_Mask_4_STEEL
	{
		displayName = "[A3L] Hockey Mask (lightning)";
		author = "Noah Rebel";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\D_C\Models\HockeyMask\data\Hockey_Mask_4_LIGHTNING_CO.paa"};
	};
	class D_Hockey_Mask_4_TRON1: D_Hockey_Mask_4_STEEL
	{
		displayName = "[A3L] Hockey Mask (Tron 1)";
		author = "Noah Rebel";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\D_C\Models\HockeyMask\data\Hockey_Mask_4_TRON1_CO.paa"};
	};
	class D_Hockey_Mask_4_TRON2: D_Hockey_Mask_4_STEEL
	{
		displayName = "[A3L] Hockey Mask (Tron 2)";
		author = "Noah Rebel";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\D_C\Models\HockeyMask\data\Hockey_Mask_4_TRON2_CO.paa"};
	};
	class D_Hockey_Mask_4_BULLSEYE: D_Hockey_Mask_4_STEEL
	{
		displayName = "[A3L] Hockey Mask (Bullseye)";
		author = "Noah Rebel";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\D_C\Models\HockeyMask\data\Hockey_Mask_4_BULLSEYE_CO.paa"};
	};
	class D_Hockey_Mask_4_DIRTY: D_Hockey_Mask_4_STEEL
	{
		displayName = "[A3L] Hockey Mask (Dirty)";
		author = "Noah Rebel";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\D_C\Models\HockeyMask\data\Hockey_Mask_4_DIRTY_CO.paa"};
	};
	class D_Hockey_Mask_4_WOOD: D_Hockey_Mask_4_STEEL
	{
		displayName = "[A3L] Hockey Mask (Wood)";
		author = "Noah Rebel";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\D_C\Models\HockeyMask\data\Hockey_Mask_4_WOOD_CO.paa"};
	};
};