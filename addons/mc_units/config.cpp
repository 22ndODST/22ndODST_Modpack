#include "script_component.hpp"

class CfgPatches
{
	class 22nd_MC_Infantry
	{
		units[]=
		{
			"22nd_MC_Rifleman",
			"22nd_MC_TeamLeader",
			"22nd_MC_AutomaticRifleman",
			"22nd_MC_AsstAutomaticRifleman",
			"22nd_MC_RiflemanAT"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"OPTRE_UNSC_Units",
			"OPTRE_Weapons",
			"OPTRE_Vehicles",
			"ACE_Main"
		};
	};
};

class cfgFactionClasses
{
	class 22nd_battalion_odst_unit;
};

class cfgVehicleClasses
{
	class 22nd_Infantry_MC_class
	{
		displayName = "Marine Corps [Woodland]";
		author = "Sgt N.Parker";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
};

class CfgVehicles
{
	class OPCAN_MC_77;
	class 22nd_MC_Base: OPCAN_MC_77
	{
		author="Sgt N.Parker";
		_generalMacro="22nd_MC_Base";
		scope=1;
		scopeCurator = 1;
		displayName="Base Unit";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		faction = "22nd_battalion_odst_unit";
		vehicleClass = "22nd_Infantry_MC_class";
		backpack = "";
		linkedItems[] = {
			"UNSC_AR_Vest_W",
			"tf_anprc152",
			"ItemMap",
			"ItemCompass",
			"OPTRE_UNSC_CH252_Helmet_WDL",
			"ItemWatch",
			"OPTRE_NVG"
		};
		items[] = {};
		respawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		RespawnlinkedItems[] = {
			"UNSC_AR_Vest_W",
			"tf_anprc152",
			"ItemMap",
			"ItemCompass",
			"OPTRE_UNSC_CH252_Helmet_WDL",
			"ItemWatch",
			"OPTRE_NVG"
		};
		weapons[] =
		{
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"Throw",
			"Put"
		};
	};
	class 22nd_MC_Rifleman: 22nd_MC_Base
	{
		scope = 2;
		scopeCurator = 2;
		author="Sgt N.Parker";
		displayName = "Rifleman [WIP]";
		backpack = "22nd_rifleman_backpack";
		weapons[] =
		{
			"OPTRE_MA5B_AC",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"OPTRE_MA5B_AC",
			"Throw",
			"Put"
		};
		items[] =
		{
			"ACE_Earplugs",
			MAGS_6("ACE_quikclot"),
			MAGS_2("ACE_morphine"),
			MAGS_2("ACE_tourniquet"),
			MAGS_4("ACE_CableTie")
		};
		respawnItems[] =
		{
			"ACE_Earplugs",
			MAGS_6("ACE_quikclot"),
			MAGS_2("ACE_morphine"),
			MAGS_2("ACE_tourniquet"),
			MAGS_4("ACE_CableTie")
		};
		magazines[] =
		{
			MAGS_7("OPTRE_60Rnd_762x51_Mag")
		};
		respawnMagazines[] =
		{
			MAGS_7("OPTRE_60Rnd_762x51_Mag")
		};
	};
	class 22nd_MC_TeamLeader: 22nd_MC_Base
	{
		scope = 2;
		scopeCurator = 2;
		author="Sgt N.Parker";
		displayName = "Fire Team Leader [WIP]";
		backpack = "22nd_teamLeader_backpack";
		weapons[] =
		{
			"OPTRE_MA5BGL_AC",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"OPTRE_MA5BGL_AC",
			"Throw",
			"Put"
		};
		items[] =
		{
			"ACE_Earplugs",
			MAGS_6("ACE_quikclot"),
			MAGS_2("ACE_morphine"),
			MAGS_2("ACE_tourniquet"),
			MAGS_4("ACE_CableTie")
		};
		respawnItems[] =
		{
			"ACE_Earplugs",
			MAGS_6("ACE_quikclot"),
			MAGS_2("ACE_morphine"),
			MAGS_2("ACE_tourniquet"),
			MAGS_4("ACE_CableTie")
		};
		magazines[] =
		{
			MAGS_7("OPTRE_60Rnd_762x51_Mag")
		};
		respawnMagazines[] =
		{
			MAGS_7("OPTRE_60Rnd_762x51_Mag")
		};
	};
	class 22nd_MC_AutomaticRifleman: 22nd_MC_Base
	{
		scope = 2;
		scopeCurator = 2;
		author="Sgt N.Parker";
		displayName = "Automatic Rifleman [WIP]";
		backpack = "22nd_autorifle_backpack";
		weapons[] =
		{
			"OPTRE_M73",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"OPTRE_M73",
			"Throw",
			"Put"
		};
		items[] =
		{
			"ACE_Earplugs",
			MAGS_6("ACE_quikclot"),
			MAGS_2("ACE_morphine"),
			MAGS_2("ACE_tourniquet"),
			MAGS_4("ACE_CableTie")
		};
		respawnItems[] =
		{
			"ACE_Earplugs",
			MAGS_6("ACE_quikclot"),
			MAGS_2("ACE_morphine"),
			MAGS_2("ACE_tourniquet"),
			MAGS_4("ACE_CableTie")
		};
		magazines[] =
		{
			MAGS_4("OPTRE_100Rnd_95x40_Box")
		};
		respawnMagazines[] =
		{
			MAGS_4("OPTRE_100Rnd_95x40_Box")
		};
	};
	class 22nd_MC_AsstAutomaticRifleman: 22nd_MC_Base
	{
		scope = 2;
		scopeCurator = 2;
		author="Sgt N.Parker";
		displayName = "Asst. Automatic Rifleman [WIP]";
		backpack = "22nd_asstautorifle_backpack";
		weapons[] =
		{
			"OPTRE_MA5B_AC",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"OPTRE_MA5B_AC",
			"Throw",
			"Put"
		};
		items[] =
		{
			"ACE_Earplugs",
			MAGS_6("ACE_quikclot"),
			MAGS_2("ACE_morphine"),
			MAGS_2("ACE_tourniquet"),
			MAGS_4("ACE_CableTie")
		};
		respawnItems[] =
		{
			"ACE_Earplugs",
			MAGS_6("ACE_quikclot"),
			MAGS_2("ACE_morphine"),
			MAGS_2("ACE_tourniquet"),
			MAGS_4("ACE_CableTie")
		};
		magazines[] =
		{
			MAGS_7("OPTRE_60Rnd_762x51_Mag")
		};
		respawnMagazines[] =
		{
			MAGS_7("OPTRE_60Rnd_762x51_Mag")
		};
	};
	class 22nd_MC_RiflemanAT: 22nd_MC_Base
	{
		scope = 2;
		scopeCurator = 2;
		author="Sgt N.Parker";
		displayName = "Rifleman [AT] [WIP]";
		backpack = "22nd_riflemanAT_backpack";
		weapons[] =
		{
			"OPTRE_MA5B_AC",
			"OPTRE_M41_SSR",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"OPTRE_MA5B_AC",
			"OPTRE_M41_SSR",
			"Throw",
			"Put"
		};
		items[] =
		{
			"ACE_Earplugs",
			MAGS_6("ACE_quikclot"),
			MAGS_2("ACE_morphine"),
			MAGS_2("ACE_tourniquet"),
			MAGS_4("ACE_CableTie")
		};
		respawnItems[] =
		{
			"ACE_Earplugs",
			MAGS_6("ACE_quikclot"),
			MAGS_2("ACE_morphine"),
			MAGS_2("ACE_tourniquet"),
			MAGS_4("ACE_CableTie")
		};
		magazines[] =
		{
			MAGS_7("OPTRE_60Rnd_762x51_Mag")
		};
		respawnMagazines[] =
		{
			MAGS_7("OPTRE_60Rnd_762x51_Mag")
		};
	};
	class B_Kitbag_rgr;
    class 22nd_rifleman_backpack: B_Kitbag_rgr
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(OPTRE_M9_Frag,4);
            mag_xx(OPTRE_M2_Smoke,4);
            mag_xx(OPTRE_M2_Smoke_Blue,4);
            mag_xx(OPTRE_M2_Smoke_Red,4);
            mag_xx(ACE_M84,4);
        };
    };
    class 22nd_riflemanAT_backpack: B_Kitbag_rgr
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(OPTRE_M41_Twin_HEAT,3);
            mag_xx(OPTRE_M9_Frag,4);
            mag_xx(OPTRE_M2_Smoke,4);
            mag_xx(OPTRE_M2_Smoke_Blue,4);
            mag_xx(OPTRE_M2_Smoke_Red,4);
            mag_xx(ACE_M84,4);
        };
    };
    class 22nd_teamLeader_backpack: B_Kitbag_rgr
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(1Rnd_HE_Grenade_shell,10);
            mag_xx(1Rnd_Smoke_Grenade_shell,6);
            mag_xx(1Rnd_SmokeRed_Grenade_shell,5);
            mag_xx(1Rnd_SmokePurple_Grenade_shell,5);
            mag_xx(OPTRE_M9_Frag,4);
            mag_xx(OPTRE_M2_Smoke,4);
            mag_xx(OPTRE_M2_Smoke_Blue,4);
            mag_xx(OPTRE_M2_Smoke_Red,4);
            mag_xx(ACE_M84,4);
        };
    };
    class 22nd_autorifle_backpack: B_Kitbag_rgr
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(OPTRE_100Rnd_95x40_Box,2);
            mag_xx(OPTRE_M9_Frag,4);
            mag_xx(OPTRE_M2_Smoke,4);
            mag_xx(OPTRE_M2_Smoke_Blue,4);
            mag_xx(OPTRE_M2_Smoke_Red,4);
            mag_xx(ACE_M84,4);
        };
    };
    class 22nd_asstautorifle_backpack: B_Kitbag_rgr
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(OPTRE_100Rnd_95x40_Box,2);
            mag_xx(OPTRE_M9_Frag,4);
            mag_xx(OPTRE_M2_Smoke,4);
            mag_xx(OPTRE_M2_Smoke_Blue,4);
            mag_xx(OPTRE_M2_Smoke_Red,4);
            mag_xx(ACE_M84,4);
        };
        class TransportItems
        {
        	item_xx(ACE_SpareBarrel,1);
        };
    };
};
