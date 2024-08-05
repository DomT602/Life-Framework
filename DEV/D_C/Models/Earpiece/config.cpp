#define _ARMA_
class CfgPatches
{
	class D_Earpiece
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_gamma"};
	};
};
class cfgWeapons
{
	class NVGoggles;
	class D_Earpiece: NVGoggles
	{
		author = "PMC";
		displayName = "Radio Earpiece";
		picture = "D_C\Models\Earpiece\data\icon_H_earpiece.paa";
		model = "D_C\Models\Earpiece\earpiece.p3d";
		modelOptics = "-";
		descriptionShort = "Earpiece";
		descriptionUse = "";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "D_C\Models\Earpiece\earpiece.p3d";
			modelOff = "D_C\Models\Earpiece\earpiece.p3d";
			mass = 4;
		};
	};
};
