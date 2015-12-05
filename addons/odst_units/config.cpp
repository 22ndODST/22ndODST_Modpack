class cfgVehicles
{
	#include "CfgVehicles.hpp"
};

class cfgWeapons
{
	#include "CfgWeapons.hpp"
};

class cfgFactionClasses
{
	class 22nd_battalion_odst_unit
	{
		displayName = "22nd ODST Battalion";
		author = "kripto202";
		priority = 1;
		side = 1;
		icon="\z\22nd\addons\odst_units\odst_emblem.paa";
		primaryLanguage="EN";
		backpack_tf_faction_radio_api="OPTRE_Como_pack_2";
	};
};

class cfgVehicleClasses
{
	class 22nd_Infantry_class
	{
		displayName = "Infantry [ODST]";
		author = "kripto202";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
};

class cfgPatches
{
	class 22nd_odst_units
	{
		requiredAddons[]=
		{
			"A3_Characters_F",
			"OPTRE_UNSC_Units",
			"OPTRE_Weapons",
			"OPTRE_Vehicles",
			"ACE_Main"
		};
		weapons[]=
		{
			"22nd_ODST_kripto202_Helmet_Sniper",
			"22nd_ODST_kripto202_Helmet_Sniper_dp",
			"22nd_odst_vest_kripto202"
		};

		units[]=
		{
			"OPTRE_UNSC_ODST_Soldier",
			"22nd_ODST_Soldier_Sniper",
			"22nd_odst_kripto202"
		};
	};
};
