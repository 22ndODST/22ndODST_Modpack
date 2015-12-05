class OPTRE_UNSC_Army_Soldier_WDL;
class B_Soldier_F;
class B_Soldier_base_F;
class SoldierWB;
class CAManBase;
class Man;
class Land;
class AllVehicles;
class All;
class OPTRE_UNSC_Marine_Soldier;

////Units\\\\

class 22nd_odst_base: B_Soldier_F
{
	scope=0;
	scopeCurator=0;
	scopeArsenal = 0;
	displayName="-";
	faction="22nd_battalion_odst_unit";
	author="kripto202";
	uniformAccessories[]={};
	nakedUniform="U_BasicBody";
	vehicleClass="22nd_Infantry_class";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	identityTypes[]=
	{
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
	class HitPoints
	{
		class HitHead
		{
		armor=1;
		material=-1;
		name="face_hub";
		passThrough=1;
		radius=0.1;
		explosionShielding=0.5;
		minimalHit=0;
	};
	class HitFace
	{
		armor=1;
		material=-1;
		name="neck";
		passThrough=1;
		radius=0.079999998;
		explosionShielding=0.5;
		minimalHit=0.0099999998;
	};
	class HitNeck
	{
		armor=1;
		material=-1;
		name="head";
		passThrough=1;
		radius=0.1;
		explosionShielding=0.5;
		minimalHit=0.0099999998;
	};
	class HitBody
	{
		armor=5;
		material=-1;
		name="pelvis";
		passThrough=1;
		radius=0.15000001;
		explosionShielding=5;
		visual="injury_body";
		minimalHit=0;
	};
	class HitAbdomen
	{
		armor=1;
		material=-1;
		name="spine1";
		passThrough=1;
		radius=0.15000001;
		explosionShielding=5;
		visual="injury_body";
		minimalHit=0.0099999998;
	};
	class HitDiaphragm
	{
		armor=1;
		material=-1;
		name="spine2";
		passThrough=1;
		radius=0.15000001;
		explosionShielding=6;
		visual="injury_body";
		minimalHit=0.0099999998;
	};
	class HitChest
	{
		armor=1;
		material=-1;
		name="spine3";
		passThrough=1;
		radius=0.15000001;
		explosionShielding=6;
		visual="injury_body";
		minimalHit=0.0099999998;
	};
	class HitLeftArm
	{
		armor=1;
		material=-1;
		name="left arm";
		passThrough=1;
		radius=0.079999998;
		explosionShielding=3;
		visual="injury_hands";
		minimalHit=0.0099999998;
	};
	class HitRightArm
	{
		armor=1;
		material=-1;
		name="right arm";
		passThrough=1;
		radius=0.079999998;
		explosionShielding=3;
		visual="injury_hands";
		minimalHit=0.0099999998;
	};
	class HitHands
	{
		armor=1;
		material=-1;
		name="hands";
		passThrough=1;
		radius=0.079999998;
		explosionShielding=1;
		visual="injury_hands";
		minimalHit=0.0099999998;
	};
	class HitLeftLeg
	{
		armor=2;
		material=-1;
		name="left leg";
		passThrough=1;
		radius=0.1;
		explosionShielding=3;
		visual="injury_legs";
		minimalHit=0.0099999998;
	};
	class HitRightLeg
	{
		armor=2;
		material=-1;
		name="right leg";
		passThrough=1;
		radius=0.1;
		explosionShielding=3;
		visual="injury_legs";
		minimalHit=0.0099999998;
	};
	};
};

///kripto202\\\

class 22nd_odst_kripto202: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] kripto202";
	author="kripto202";
	uniformClass="22nd_ODST_kripto202_sniper_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	weapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	respawnMagazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan",
		"attach_rightshoulder"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_kripto202_l0_armor.paa"
	};
};

class 22nd_odst_marpat_kripto202: 22nd_odst_kripto202
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat M.Kripto";
	uniformClass="22nd_ODST_marpat_kripto202_sniper_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan",
		"attach_rightshoulder"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_kripto202_l0_marpat_armor.paa"
	};
};

class 22nd_odst_marpat_desert_kripto202: 22nd_odst_kripto202
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat Desert M.Kripto";
	uniformClass="22nd_ODST_marpat_desert_kripto202_sniper_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan",
		"attach_rightshoulder"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_kripto202_l0_marpat_desert_armor.paa"
	};
};

///Garrus\\\

class 22nd_odst_garrus: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Garrus";
	author="kripto202";
	uniformAccessories[]={};
	nakedUniform="U_BasicBody";
	uniformClass="22nd_ODST_garrus_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	weapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	respawnMagazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_garrus_l0_armor.paa"
	};
};

class 22nd_odst_marpat_garrus: 22nd_odst_garrus
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat M.Steros";
	uniformClass="22nd_ODST_marpat_garrus_comms_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_garrus_l0_marpat_armor.paa"
	};
};

class 22nd_odst_marpat_desert_garrus: 22nd_odst_garrus
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat Desert M.Steros";
	uniformClass="22nd_ODST_marpat_desert_garrus_comms_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_garrus_l0_marpat_desert_armor.paa"
	};
};

///browerxd\\\

class 22nd_odst_browerxd: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] browerxd";
	author="kripto202";
	uniformAccessories[]={};
	uniformClass="22nd_ODST_browerxd_uniform";
	weapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	respawnMagazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_browerxd_l0_armor.paa"
	};
};

class 22nd_odst_marpat_browerxd: 22nd_odst_browerxd
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat A.Brower";
	uniformClass="22nd_ODST_marpat_browerxd_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_browerxd_l0_marpat_armor.paa"
	};
};

class 22nd_odst_marpat_desert_browerxd: 22nd_odst_browerxd
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat Desert A.Brower";
	uniformClass="22nd_ODST_marpat_desert_browerxd_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_browerxd_l0_marpat_desert_armor.paa"
	};
};

///darren\\\

class 22nd_odst_darren: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Darren";
	author="kripto202";
	uniformClass="22nd_ODST_darren_uniform";
	weapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	respawnMagazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_darren_l0_armor.paa"
	};
};

class 22nd_odst_marpat_darren: 22nd_odst_darren
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat D.Darren";
	uniformClass="22nd_ODST_marpat_darren_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_darren_l0_marpat_armor.paa"
	};
};

class 22nd_odst_marpat_desert_darren: 22nd_odst_darren
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat Desert D.Darren";
	uniformClass="22nd_ODST_marpat_desert_darren_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_darren_l0_marpat_desert_armor.paa"
	};
};

///barkhorn\\\

class 22nd_odst_barkhorn: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] barkhorn";
	author="kripto202";
	uniformClass="22nd_ODST_barkhorn_uniform";
	weapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	respawnMagazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_barkhorn_l0_armor.paa"
	};
};

class 22nd_odst_marpat_barkhorn: 22nd_odst_barkhorn
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat G.Barkhorn";
	uniformClass="22nd_ODST_marpat_barkhorn_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_barkhorn_l0_marpat_armor.paa"
	};
};

class 22nd_odst_marpat_desert_barkhorn: 22nd_odst_barkhorn
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat Desert G.Barkhorn";
	uniformClass="22nd_ODST_marpat_desert_barkhorn_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_barkhorn_l0_marpat_desert_armor.paa"
	};
};

///litch\\\

class 22nd_odst_litch: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] litch";
	author="kripto202";
	uniformClass="22nd_ODST_litch_uniform";
	weapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	respawnMagazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_litch_l0_armor.paa"
	};
};

class 22nd_odst_marpat_litch: 22nd_odst_litch
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat J.Litch";
	uniformClass="22nd_ODST_marpat_litch_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_litch_l0_marpat_armor.paa"
	};
};

class 22nd_odst_marpat_desert_litch: 22nd_odst_litch
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat Desert J.Litch";
	uniformClass="22nd_ODST_marpat_desert_litch_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_litch_l0_marpat_desert_armor.paa"
	};
};

///nathan\\\

class 22nd_odst_nathan: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] nathan";
	author="kripto202";
	uniformClass="22nd_ODST_nathan_uniform";
	weapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	respawnMagazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_nathan_l0_armor.paa"
	};
};

class 22nd_odst_marpat_nathan: 22nd_odst_nathan
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat N.Parker";
	uniformClass="22nd_ODST_marpat_nathan_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_nathan_l0_marpat_armor.paa"
	};
};

class 22nd_odst_marpat_desert_nathan: 22nd_odst_nathan
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat Desert N.Parker";
	uniformClass="22nd_ODST_marpat_desert_nathan_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_nathan_l0_marpat_desert_armor.paa"
	};
};

//whooda\\

class 22nd_odst_whooda: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] whooda";
	author="kripto202";
	uniformClass="22nd_ODST_whooda_uniform";
	model="\OPTRE_UNSC_Units\ODST\uniform.p3d";
	weapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	respawnMagazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_whooda_l0_armor.paa"
	};
};

class 22nd_odst_marpat_whooda: 22nd_odst_whooda
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat J.Whooda";
	uniformClass="22nd_ODST_marpat_whooda_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_whooda_l0_marpat_armor.paa"
	};
};

class 22nd_odst_marpat_desert_whooda: 22nd_odst_whooda
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat Desert J.Whooda";
	uniformClass="22nd_ODST_marpat_desert_whooda_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_whooda_l0_marpat_desert_armor.paa"
	};
};

///default\\\

class 22nd_odst_default: 22nd_odst_base
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="22nd ODST Soldier";
	author="kripto202";
	uniformClass="22nd_ODST_default_uniform";
	weapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"OPTRE_SRS99D_SC_LS",
		"OPTRE_M6G_SF",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	respawnMagazines[]=
	{
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_4Rnd_145x114_APFSDS_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_M9_Frag",
		"OPTRE_M9_Frag",
		"OPTRE_M2_Smoke",
		"OPTRE_M2_Smoke_Green"
	};
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_default_l0_armor.paa"
	};
};

class 22nd_odst_marpat_default: 22nd_odst_default
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat Soldier";
	uniformClass="22nd_ODST_marpat_default_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_default_l0_marpat_armor.paa"
	};
};

class 22nd_odst_marpat_desert_default: 22nd_odst_default
{
	scope=2;
	scopeCurator=1;
	scopeArsenal = 2;
	displayName="[ODST] Marpat Desert Soldier";
	uniformClass="22nd_ODST_marpat_desert_default_uniform";
	hiddenSelections[]=
	{
		"camo1",
		"insignia",
		"clan"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\22nd\addons\odst_units\data\uniform\odst_default_l0_marpat_desert_armor.paa"
	};
};