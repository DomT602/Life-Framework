#define _ARMA_

class defauLtUserActions;
class DefauLtEventhandlers;
class CfgPatches
{
	class D_RebelMask1
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
	class D_RebelMask1_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Rebel Mask Black";
		author = "Jack";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
		model = "D_C\Models\RebelMask1\RebelMask1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"D_C\Models\RebelMask1\data\RebelMask1_Black.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "D_C\Models\RebelMask1\RebelMask1.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"D_C\Models\RebelMask1\data\RebelMask1_Black.paa"};
			modelSides[] = {6};
		};
	};
	class D_RebelMask1_BlackCamo: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Rebel Mask Grey";
		author = "Jack";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
		model = "D_C\Models\RebelMask1\RebelMask1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"D_C\Models\RebelMask1\data\RebelMask1_BlackCamo.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "D_C\Models\RebelMask1\RebelMask1.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"D_C\Models\RebelMask1\data\RebelMask1_BlackCamo.paa"};
			modelSides[] = {6};
		};
	};
	class D_RebelMask1_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Rebel Mask Green";
		author = "Jack";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
		model = "D_C\Models\RebelMask1\RebelMask1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"D_C\Models\RebelMask1\data\RebelMask1_Green.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "D_C\Models\RebelMask1\RebelMask1.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"D_C\Models\RebelMask1\data\RebelMask1_Green.paa"};
			modelSides[] = {6};
		};
	};
	class D_RebelMask1_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Rebel Mask Tan";
		author = "Jack";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
		model = "D_C\Models\RebelMask1\RebelMask1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"D_C\Models\RebelMask1\data\RebelMask1_Tan.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "D_C\Models\RebelMask1\RebelMask1.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"D_C\Models\RebelMask1\data\RebelMask1_Tan.paa"};
			modelSides[] = {6};
		};
	};
	class D_RebelMask1_Grey: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Rebel Mask Grey";
		author = "Jack";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
		model = "D_C\Models\RebelMask1\RebelMask1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"D_C\Models\RebelMask1\data\RebelMask1_Grey.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "D_C\Models\RebelMask1\RebelMask1.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"D_C\Models\RebelMask1\data\RebelMask1_Grey.paa"};
			modelSides[] = {6};
		};
	};
};