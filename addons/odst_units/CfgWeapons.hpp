class cfgWeapons {
	class UniformItem;
	class U_B_CombatUniform_mcam;

	class 22nd_ODST_uniform_mKripto: U_B_CombatUniform_mcam {
		author = "22nd ODST Dev Team";
		scope = 2;
		scopeArsenal=2;
		displayName = "Uniform [M.Kripto]";
		picture = "\OPTRE_UNSC_Units\ODST\Icons\odst_uniform_left.paa";
		class ItemInfo: UniformItem {
		 uniformModel = "-";
		 uniformClass = "22nd_odst_mKripto";
		 containerClass = Supply40;
		 mass = 40;
		};
	};

	class 22nd_ODST_uniform_nParker: 22nd_ODST_uniform_mKripto {
		displayName = "Uniform [N.Parker]";
		class ItemInfo: UniformItem {
		 uniformModel = "-";
		 uniformClass = "22nd_odst_nParker";
		 containerClass = Supply40;
		 mass = 40;
		};
	};

	class OPTRE_UNSC_ODST_Helmet;
	class HeadgearItem;
	class OPTRE_UNSC_ODST_Helmet_mKripto: OPTRE_UNSC_ODST_Helmet
  {
		scope = 2;
		scopeArsenal=2;
    author = "22nd ODST Dev Team";
    picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
    displayName="Helmet [M.Kripto]";
    model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
    hiddenSelections[]=
    {
      "camo1",
      "camo2",
      "attach_cam",
      "attach_communication",
      "attach_flashlight",
      "attach_rebreather",
      "attach_laser",
      "attach_mount"
    };
    hiddenSelectionsTextures[]=
    {
      PATHTOF(data\helmet\odst_kripto202_l0_helmet.paa),
	  	PATHTOF(data\helmet\odst_kripto202_l0_helmet.paa)
    };
    class ItemInfo: HeadgearItem
    {
      uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
      armor=10;
      mass=40;
      hiddenSelections[]=
      {
        "camo1",
        "camo2",
        "attach_cam",
        "attach_communication",
        "attach_flashlight",
        "attach_rebreather",
        "attach_laser",
        "attach_mount"
      };
      hiddenSelectionsTextures[]=
      {
	      PATHTOF(data\helmet\odst_kripto202_l0_helmet.paa),
		  	PATHTOF(data\helmet\odst_kripto202_l0_helmet.paa)
      };
    };
  };
	class OPTRE_UNSC_ODST_Helmet_mKripto_dp: OPTRE_UNSC_ODST_Helmet_mKripto
	{
    author="22nd ODST Dev Team";
    scopeArsenal=1;
    scopeCurator=1;
    hiddenSelectionsTextures[]=
    {
      PATHTOF(data\helmet\odst_kripto202_l0_helmet.paa),
      "\optre_vehicles\pelican\data\glass_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
      "\optre_vehicles\pelican\data\reflective_glass.rvmat"
    };
    class ItemInfo: ItemInfo
    {
      hiddenSelectionsTextures[]=
      {
        PATHTOF(data\helmet\odst_kripto202_l0_helmet.paa),
        "\optre_vehicles\pelican\data\glass_ca.paa"
      };
      hiddenSelectionsMaterials[]=
      {
        "OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
        "\optre_vehicles\pelican\data\reflective_glass.rvmat"
      };
    };
  };
	class OPTRE_UNSC_ODST_Helmet_nParker: OPTRE_UNSC_ODST_Helmet_mKripto {
		scope = 2;
		scopeArsenal=2;
    author = "22nd ODST Dev Team";
    picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_como.paa";
    displayName="Helmet [N.White]";
    model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
    hiddenSelections[]=
    {
			"camo1",
      "camo2",
      "attach_cam",
      "attach_flashlight",
      "attach_laser",
      "attach_mount",
      "attach_rangefinder",
      "attach_rebreather"
    };
    hiddenSelectionsTextures[]=
    {
      PATHTOF(data\helmet\odst_nathan_l0_helmet.paa),
	  	PATHTOF(data\helmet\odst_nathan_l0_helmet.paa)
    };
    class ItemInfo: HeadgearItem
    {
      uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
      armor=10;
      mass=40;
      hiddenSelections[]=
      {
				"camo1",
	      "camo2",
	      "attach_cam",
	      "attach_flashlight",
	      "attach_laser",
	      "attach_mount",
	      "attach_rangefinder",
	      "attach_rebreather"
      };
      hiddenSelectionsTextures[]=
      {
	      PATHTOF(data\helmet\odst_nathan_l0_helmet.paa),
		  	PATHTOF(data\helmet\odst_nathan_l0_helmet.paa)
      };
    };
  };
	class OPTRE_UNSC_ODST_Helmet_nParker_dp: OPTRE_UNSC_ODST_Helmet_nParker
  {
    author="22nd ODST Dev Team";
    scopeArsenal=1;
    scopeCurator=1;
    hiddenSelectionsTextures[]=
    {
      PATHTOF(data\helmet\odst_nathan_l0_helmet.paa),
      "\optre_vehicles\pelican\data\glass_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
      "\optre_vehicles\pelican\data\reflective_glass.rvmat"
    };
    class ItemInfo: ItemInfo
    {
      hiddenSelectionsTextures[]=
      {
        PATHTOF(data\helmet\odst_nathan_l0_helmet.paa),
        "\optre_vehicles\pelican\data\glass_ca.paa"
      };
      hiddenSelectionsMaterials[]=
      {
        "OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
        "\optre_vehicles\pelican\data\reflective_glass.rvmat"
      };
    };
  };

	class V_PlateCarrier1_rgr;
	class VestItem;
	class 22nd_odst_vest_mKripto: V_PlateCarrier1_rgr
  {
    scope=2;
	  scopeArsenal=2;
    author = "22nd ODST Dev Team";
    displayName="Combat Vest [M.Kripto]";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_vest.paa";
		model = "\OPTRE_UNSC_Units\ODST\vest.p3d";
    hiddenSelections[]=
    {
      "camo1",
      "camo2",
      "attach_nade"
    };
    hiddenSelectionsTextures[]=
    {
      PATHTOF(data\vest\odst_kripto202_l0_vest.paa),
      ""
    };
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\ODST\vest.p3d";
			containerClass = "Supply180";
			mass = 80;
      hiddenSelections[]=
      {
        "camo1",
        "camo2",
        "attach_nade"
      };
      hiddenSelectionsTextures[]=
      {
	      PATHTOF(data\vest\odst_kripto202_l0_vest.paa),
        ""
      };
    };
	};

	class 22nd_odst_vest_nParker: 22nd_odst_vest_mKripto {
		author = "22nd ODST Dev Team";
		displayName="Combat Vest [N.Parker]";
    hiddenSelectionsTextures[]=
    {
      PATHTOF(data\vest\odst_nathan_l0_vest.paa),
      ""
    };
    class ItemInfo: ItemInfo
    {
			hiddenSelectionsTextures[]=
      {
	      PATHTOF(data\vest\odst_nathan_l0_vest.paa),
        ""
      };
    };
	};
};
