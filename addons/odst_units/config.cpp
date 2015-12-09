#include "script_component.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

class cfgFactionClasses {
	class 22nd_battalion_odst_unit {
		displayName = "22nd ODST Battalion";
		author = "kripto202";
		priority = 1;
		side = 1;
		icon= PATHTOF(odst_emblem.paa);
		primaryLanguage="EN";
		backpack_tf_faction_radio_api="OPTRE_Como_pack_2";
	};
};

class cfgVehicleClasses {
	class 22nd_Infantry_ODST_B_class {
		displayName = "ODST [Black]";
		author = "kripto202";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class 22nd_Infantry_ODST_M_class {
		displayName = "ODST [MARPAT]";
		author = "kripto202";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class 22nd_Infantry_ODST_D_class {
		displayName = "ODST [Desert MARPAT]";
		author = "kripto202";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
};

class cfgPatches {
	class 22nd_odst_units {
		requiredAddons[]= {
			"A3_Characters_F",
			"OPTRE_UNSC_Units",
			"OPTRE_Weapons",
			"OPTRE_Vehicles",
			"ACE_Main"
		};
		weapons[] = {
			"22nd_ODST_kripto202_Helmet_Sniper",
			"22nd_ODST_kripto202_Helmet_Sniper_dp",
			"22nd_odst_vest_kripto202"
		};

		units[] =	{
			"22nd_odst_mKripto",
			"22nd_odst_nParker"
		};
	};
};
