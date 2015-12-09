class cfgVehicles {
	class OPTRE_UNSC_Army_Soldier_WDL;
	class B_Soldier_F;
	class B_Soldier_base_F;
	class SoldierWB;
	class CAManBase;
	class Man;
	class OPTRE_UNSC_Marine_Soldier;

	class 22nd_odst_base: B_Soldier_F {
		scope=1;
		scopeCurator=1;
		scopeArsenal = 1;
		displayName="Base";
		faction="22nd_battalion_odst_unit";
		author = "22nd ODST Dev Team";
		uniformAccessories[]={};
		nakedUniform="U_BasicBody";
		vehicleClass="22nd_Infantry_ODST_B_class";
		identityTypes[] = {
			"LanguageENG_F",
			"Miller",
			"Kerry",
			"EPA_B_Northgate",
			"EPA_B_Hardy",
			"EPA_B_James",
			"EPA_B_McKay",
			"LanguageGRE_F",
			"Head_Greek",
			"Head_African",
			"Head_Euro",
			"Head_Asian",
			"Head_NATO",
			"G_IRAN_default"
		};
	};

	class 22nd_odst_mKripto: 22nd_odst_base {
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName="M.Kripto [Black]";
		author = "22nd ODST Dev Team";
		vehicleClass="22nd_Infantry_ODST_B_class";
		uniformClass="22nd_ODST_uniform_mKripto";
		model = "\OPTRE_UNSC_Units\ODST\uniform.p3d";
		hiddenSelections[] = {
			"camo1",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[] = {
			PATHTOF(data\uniform\odst_kripto202_l0_armor.paa)
		};
		linkedItems[] = {
			"OPTRE_UNSC_ODST_Helmet_mKripto",
			"22nd_odst_vest_mKripto"
		};
		respawnLinkedItems[] = {
			"OPTRE_UNSC_ODST_Helmet_mKripto",
			"22nd_odst_vest_mKripto"
		};
		weapons[] = {
			"OPTRE_SRS99D_SC_LS",
			"OPTRE_M6G_SF",
			"Throw",
			"Put"
		};
		respawnWeapons[] =	{
			"OPTRE_SRS99D_SC_LS",
			"OPTRE_M6G_SF",
			"Throw",
			"Put"
		};
		magazines[] = {
			MAGS_7("OPTRE_4Rnd_145x114_APFSDS_Mag"),
			MAGS_4("OPTRE_8Rnd_127x40_Mag"),
			MAGS_2("OPTRE_M9_Frag"),
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[] = {
			MAGS_7("OPTRE_4Rnd_145x114_APFSDS_Mag"),
			MAGS_4("OPTRE_8Rnd_127x40_Mag"),
			MAGS_2("OPTRE_M9_Frag"),
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
	};

	class 22nd_odst_nParker: 22nd_odst_mKripto {
		displayName="N.Parker [Black]";
		author = "22nd ODST Dev Team";
		vehicleClass="22nd_Infantry_ODST_B_class";
		uniformClass="22nd_ODST_uniform_nParker";
		model = "\OPTRE_UNSC_Units\ODST\uniform.p3d";
		hiddenSelections[] = {
			"camo1",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[] = {
			PATHTOF(data\uniform\odst_nathan_l0_armor.paa)
		};
		linkedItems[] = {
			"OPTRE_UNSC_ODST_Helmet_nParker",
			"22nd_odst_vest_nParker"
		};
		respawnLinkedItems[] = {
			"OPTRE_UNSC_ODST_Helmet_nParker",
			"22nd_odst_vest_nParker"
		};
	};
};
