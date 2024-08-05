class CfgPatches {
class D_PatchCap {
units[] = {};
weapons[] = {};
requiredVersion = 0.1;
requiredAddons[] = {};
};
};

class cfgWeapons {
class H_Cap_blk;	// External class reference
class HeadgearItem; // External class reference
class H_Cap_cappatch_default: H_Cap_blk
	{
		scope = 0;
		weaponPoolAvailable = 0;
		displayName = "Cap with Patch";
		model = "\D_C\Models\Cap\cap_patch.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_uk_co.paa","\D_C\Models\Cap\data\Flagpatch_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\D_C\Models\Cap\cap_patch.p3d";
			hiddenSelections[] = {"camo1","camo2"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;			
		};
	};
class H_Cap_capbackpatch_default: H_Cap_blk
	{
		scope = 0;
		weaponPoolAvailable = 0;
		displayName = "Backwards Cap with Patch";
		model = "\D_C\Models\Cap\capback_patch.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_uk_co.paa","\D_C\Models\Cap\data\Flagpatch_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\D_C\Models\Cap\capback_patch.p3d";
			hiddenSelections[] = {"camo1","camo2"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;			
		};
	};
};