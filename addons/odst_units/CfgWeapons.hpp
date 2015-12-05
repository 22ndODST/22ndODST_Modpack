class ItemCore;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	class H_Cap_oli;
	class Binocular;

//vests to use: Carrier GL Rig (V_PlateCarrierGL_blk), Carrier Speical Rig (V_PlateCarrierSpec_blk), Carrier Rig (v_PlateCarrier2_blk), CTRG Plate Carrier Rig Mk2 (V_PlateCarrierH_CTRG), Carrier Lite (V_PlateCarrier1_blk), Chest Rig (V_Chestrig_blk), tactical vest (V_TacVest_blk),

//uniforms\\

	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};


///kripto202\\\

	class 22ndODST_Modpack_ODST_kripto202_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST_ModpackODST] M.Kripto";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_kripto202";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_kripto202_uniform: 22ndODST_Modpack_ODST_kripto202_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat M.Kripto";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_kripto202";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_desert_kripto202_uniform: 22ndODST_Modpack_ODST_kripto202_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat Desert M.Kripto";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_desert_kripto202";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};
///garrus\\\

	class 22ndODST_Modpack_ODST_garrus_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST_ModpackODST] M.Steros";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_garrus";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_garrus_uniform: 22ndODST_Modpack_ODST_garrus_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat M.Steros";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_garrus";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_desert_garrus_uniform: 22ndODST_Modpack_ODST_garrus_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat Desert M.Steros";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_desert_garrus";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///browerxd\\\

	class 22ndODST_Modpack_ODST_browerxd_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST_ModpackODST] A.Brower";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_browerxd";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_browerxd_uniform: 22ndODST_Modpack_ODST_browerxd_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat A.Brower";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_browerxd";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_desert_browerxd_uniform: 22ndODST_Modpack_ODST_browerxd_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat Desert A.Brower";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_desert_browerxd";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///darren\\\

	class 22ndODST_Modpack_ODST_darren_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST_ModpackODST] D.Darren";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_darren";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_darren_uniform: 22ndODST_Modpack_ODST_darren_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat D.Darren";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_darren";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_desert_darren_uniform: 22ndODST_Modpack_ODST_darren_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat Desert D.Darren";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_desert_darren";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///barkhorn\\\

	class 22ndODST_Modpack_ODST_barkhorn_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST_ModpackODST] G.Barkhorn";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_barkhorn";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_barkhorn_uniform: 22ndODST_Modpack_ODST_barkhorn_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat G.Barkhorn";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_barkhorn";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_desert_barkhorn_uniform: 22ndODST_Modpack_ODST_barkhorn_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat Desert G.Barkhorn";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_desert_barkhorn";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///litch\\\

	class 22ndODST_Modpack_ODST_litch_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST_ModpackODST] J.Litch";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_litch";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_litch_uniform: 22ndODST_Modpack_ODST_litch_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat J.Litch";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_litch";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_desert_litch_uniform: 22ndODST_Modpack_ODST_litch_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat Desert J.Litch";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_desert_litch";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///nathan\\\

	class 22ndODST_Modpack_ODST_nathan_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST_ModpackODST] N.Parker";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_nathan";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_nathan_uniform: 22ndODST_Modpack_ODST_nathan_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat N.Parker";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_nathan";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_desert_nathan_uniform: 22ndODST_Modpack_ODST_nathan_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat Desert N.Parker";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_desert_nathan";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///whooda\\\

	class 22ndODST_Modpack_ODST_whooda_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST_ModpackODST] J.Whooda";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_whooda";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_whooda_uniform: 22ndODST_Modpack_ODST_whooda_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat J.Whooda";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_whooda";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_desert_whooda_uniform: 22ndODST_Modpack_ODST_whooda_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat Desert J.Whooda";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_desert_whooda";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

///default\\\

	class 22ndODST_Modpack_ODST_default_uniform: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
	displayName = "[22ndODST_ModpackODST] Uniform";
		picture = "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_default";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_default_uniform: 22ndODST_Modpack_ODST_default_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat Uniform";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_default";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

	class 22ndODST_Modpack_ODST_marpat_desert_default_uniform: 22ndODST_Modpack_ODST_default_uniform
	{
		scope=2;
		scopeArsenal=2;
		allowedSlots[] = {901};
		displayName = "[22ndODST_ModpackODST] Marpat Desert Uniform";
		class ItemInfo: UniformItem
		{
			uniformClass = "22ndODST_Modpack_odst_marpat_desert_default";
			containerClass = "Supply40";
			mass = 40;
			author = "kripto202";
			modelSides[]={6};
		};
	};

//helmets\\

	class OPTRE_UNSC_ODST_Helmet_Base: H_HelmetB
	{
		scope=0;
		author="Article 2 Studios";
		displayName="-";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet_co.paa",
			"OPTRE_UNSC_Units\ODST\data\helmet_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet_co.paa",
				"OPTRE_UNSC_Units\ODST\data\helmet_co.paa"
			};
		};
	};
	class OPTRE_UNSC_ODST_Helmet: OPTRE_UNSC_ODST_Helmet_Base
	{
		scope=2;
		author="Article 2 Studios";
		displayName="[UNSC] CH253 Helmet [ODST]";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\ODST\data\helmet_co.paa",
			"OPTRE_UNSC_Units\ODST\data\helmet_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet_co.paa",
				"OPTRE_UNSC_Units\ODST\data\helmet_co.paa"
			};
		};
	};

///kripto202\\\

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_kripto202_sniper: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] M.Kripto";
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
			"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
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
				"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_kripto202_sniper_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_kripto202_sniper
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_kripto202_marpat_sniper: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat M.Kripto";
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
			"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
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
				"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_kripto202_marpat_sniper_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_kripto202_marpat_sniper
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_kripto202_marpat_desert_sniper: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat Desert M.Kripto";
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
			"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_desert_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_desert_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
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
				"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_desert_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_desert_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_kripto202_marpat_desert_sniper_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_kripto202_marpat_desert_sniper
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_desert_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_kripto202_l0_marpat_desert_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///garrus\\\

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_garrus_comms: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_como.paa";
		displayName="[22ndODST_ModpackODST] M.Steros";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_flashlight",
			"attach_rebreather",
			"attach_rangefinder",
			"attach_laser",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_flashlight",
				"attach_rebreather",
				"attach_rangefinder",
				"attach_laser",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_garrus_comms_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_garrus_comms
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_garrus_marpat_comms: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat M.Steros";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_flashlight",
			"attach_rebreather",
			"attach_rangefinder",
			"attach_laser",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_flashlight",
				"attach_rebreather",
				"attach_rangefinder",
				"attach_laser",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_garrus_marpat_comms_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_garrus_marpat_comms
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_garrus_marpat_desert_comms: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat Desert M.Steros";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_flashlight",
			"attach_rebreather",
			"attach_rangefinder",
			"attach_laser",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_desert_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_desert_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_flashlight",
				"attach_rebreather",
				"attach_rangefinder",
				"attach_laser",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_desert_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_desert_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_garrus_marpat_desert_comms_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_garrus_marpat_desert_comms
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_desert_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_garrus_l0_marpat_desert_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///browerxd\\\

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_browerxd: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_como.paa";
		displayName="[22ndODST_ModpackODST] A.Brower";
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
			"attach_rebreather",
			"attach_communication"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_flashlight",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather",
				"attach_communication"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_browerxd_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_browerxd
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_browerxd_marpat: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat A.Brower";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_rebreather",
			"attach_rangefinder",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_mount",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_browerxd_marpat_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_browerxd_marpat
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_browerxd_marpat_desert: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat Desert A.Brower";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_rebreather",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_desert_helmet.paa",
			"\z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_desert_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_mount",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"\z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_desert_helmet.paa",
				"\z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_desert_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_browerxd_marpat_desert_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_browerxd_marpat_desert
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_desert_helmet.paa",
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
				"\z\22nd\addons\odst_units\data\helmet\odst_browerxd_l0_marpat_desert_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///darren\\\

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_darren: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_med.paa";
		displayName="[22ndODST_ModpackODST] D.Darren (Corpsman)";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_helmet.paa",
			"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_helmet.paa",
				"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_darren_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_darren
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_helmet.paa",
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
				"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_darren_marpat: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat D.Darren";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_mount",
			"attach_laser",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_helmet.paa",
			"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_mount",
				"attach_laser",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_helmet.paa",
				"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_darren_marpat_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_darren_marpat
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_helmet.paa",
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
				"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_darren_marpat_desert: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] Marpat Desert D.Darren";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_mount",
			"attach_laser",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_desert_helmet.paa",
			"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_desert_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_mount",
				"attach_laser",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_desert_helmet.paa",
				"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_desert_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_darren_marpat_desert_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_darren_marpat_desert
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_desert_helmet.paa",
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
				"\z\22nd\addons\odst_units\data\helmet\odst_darren_l0_marpat_desert_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};


///barkhorn\\\

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_barkhorn: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] G.Barkhorn";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_rebreather",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_helmet.paa",
			"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_mount",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_helmet.paa",
				"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_barkhorn_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_barkhorn
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_helmet.paa",
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
				"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_barkhorn_marpat: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] Marpat G.Barkhorn";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_rebreather",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_helmet.paa",
			"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_mount",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_helmet.paa",
				"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_barkhorn_marpat_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_barkhorn_marpat
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_helmet.paa",
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
				"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_barkhorn_marpat_desert: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] Marpat Desert G.Barkhorn";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_rebreather",
			"attach_mount",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_desert_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_desert_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_mount",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_desert_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_desert_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_barkhorn_marpat_desert_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_barkhorn_marpat_desert
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_desert_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_marpat_desert_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///litch\\\

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_litch: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] J.Litch";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_litch_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_litch
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_litch_marpat: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] Marpat J.Litch";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_mount",
			"attach_rebreather",
			"attach_laser",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_mount",
				"attach_rebreather",
				"attach_laser",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_litch_marpat_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_litch_marpat
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_litch_marpat_desert: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat Desert J.Litch";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_mount",
			"attach_rebreather",
			"attach_laser",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_desert_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_desert_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_mount",
				"attach_rebreather",
				"attach_laser",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_desert_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_desert_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_litch_marpat_desert_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_litch_marpat_desert
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_desert_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_desert_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

///nathan\\\

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_nathan: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] N.Parker";
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
			"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
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
				"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_nathan_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_nathan
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_helmet.paa",
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
				"\z\22nd\addons\odst_units\data\helmet\odst_barkhorn_l0_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_nathan_marpat: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] Marpat N.Parker";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_mount",
			"attach_flashlight",
			"attach_rebreather",
			"attach_laser",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_marpat_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_marpat_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_mount",
				"attach_flashlight",
				"attach_rebreather",
				"attach_laser",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_marpat_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_marpat_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_nathan_marpat_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_nathan_marpat
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_marpat_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_marpat_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_nathan_marpat_desert: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] Marpat Desert N.Parker";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_mount",
			"attach_flashlight",
			"attach_rebreather",
			"attach_laser",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_marpat_desert_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_nathan_l0_marpat_desert_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_mount",
				"attach_flashlight",
				"attach_rebreather",
				"attach_laser",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_desert_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_desert_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_nathan_marpat_desert_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_nathan_marpat_desert
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_desert_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_litch_l0_marpat_desert_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};


///whooda\\\

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_whooda: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] J.Whooda";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_communication",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_communication",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_whooda_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_whooda
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_whooda_marpat: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] Marpat J.Whooda";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_communication",
			"attach_mount",
			"attach_rebreather",
			"attach_laser",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_communication",
				"attach_mount",
				"attach_rebreather",
				"attach_laser",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_whooda_marpat_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_whooda_marpat
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_whooda_marpat_desert: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat Desert J.Whooda";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_communication",
			"attach_mount",
			"attach_rebreather",
			"attach_laser",
			"attach_rangefinder"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_desert_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_desert_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_communication",
				"attach_mount",
				"attach_rebreather",
				"attach_laser",
				"attach_rangefinder"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_desert_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_desert_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_whooda_marpat_desert_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_whooda_marpat_desert
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_desert_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_whooda_l0_marpat_desert_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};


///default\\\

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_default: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName="[22ndODST_ModpackODST] Helmet";
		model="\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_cam",
			"attach_communication",
			"attach_flashlight",
			"attach_laser",
			"attach_mount",
			"attach_rangefinder",
			"attach_rebreather"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_default_l0_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_default_l0_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_laser",
				"attach_mount",
				"attach_rangefinder",
				"attach_rebreather"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_default_l0_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_default_l0_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_default_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_default
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_default_l0_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_default_l0_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_default_marpat: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat Helmet";
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
			"attach_rangefinder",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_laser",
				"attach_rangefinder",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_default_marpat_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_default_marpat
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_default_marpat_desert: OPTRE_UNSC_ODST_Helmet
	{
		author="kripto202";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName="[22ndODST_ModpackODST] Marpat Desert Helmet";
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
			"attach_rangefinder",
			"attach_mount"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_desert_helmet.paa",
			"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_desert_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\helmet.p3d";
			armor=10;
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_cam",
				"attach_communication",
				"attach_flashlight",
				"attach_rebreather",
				"attach_laser",
				"attach_rangefinder",
				"attach_mount"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_desert_helmet.paa",
				"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_desert_helmet.paa"
			};
		};
	};

	class OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_default_marpat_desert_dp: OPTRE_UNSC_ODST_Helmet_22ndODST_Modpack_default_marpat_desert
	{
		author="kripto202";
		scopeArsenal=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_desert_helmet.paa",
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
				"z\22nd\addons\odst_units\data\helmet\odst_default_l0_marpat_desert_helmet.paa",
				"\optre_vehicles\pelican\data\glass_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",
				"\optre_vehicles\pelican\data\reflective_glass.rvmat"
			};
		};
	};


//vests\\

	class OPTRE_UNSC_ODST_Vest_Base: V_PlateCarrier1_rgr
	{
		scope=0;
		author="Article 2 Studios";
		displayName="-";
		picture="\OPTRE_UNSC_Units\ODST\icons\odst_vest.paa";
		model="\OPTRE_UNSC_Units\ODST\vest.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_UNSC_Units\ODST\vest.p3d";
			armor=40;
			containerClass="Supply180";
			mass=80;
			passThrough=0.1;
			modelSides[]={6};
		};
	};

///kripto202\\\

	class 22ndODST_Modpack_odst_vest_kripto202: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] M.Kripto";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_kripto202_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_kripto202_l0_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_kripto202: 22ndODST_Modpack_odst_vest_kripto202
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat M.Kripto";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_kripto202_l0_marpat_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_kripto202_l0_marpat_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_desert_kripto202: 22ndODST_Modpack_odst_vest_kripto202
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat Desert M.Kripto";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_kripto202_l0_marpat_desert_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_kripto202_l0_marpat_desert_vest.paa",
				""
			};
		};
	};

///garrus\\\

	class 22ndODST_Modpack_odst_vest_garrus: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] M.Steros";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_garrus_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_garrus_l0_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_garrus: 22ndODST_Modpack_odst_vest_garrus
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat M.Steros";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_garrus_l0_marpat_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_garrus_l0_marpat_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_desert_garrus: 22ndODST_Modpack_odst_vest_garrus
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat Desert M.Steros";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_garrus_l0_marpat_desert_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_garrus_l0_marpat_desert_vest.paa",
				""
			};
		};
	};

///browerxd\\\

	class 22ndODST_Modpack_odst_vest_browerxd: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] A.Brower";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_browerxd_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_browerxd_l0_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_browerxd: 22ndODST_Modpack_odst_vest_browerxd
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat A.Brower";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_browerxd_l0_marpat_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_browerxd_l0_marpat_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_desert_browerxd: 22ndODST_Modpack_odst_vest_browerxd
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat Desert A.Brower";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_browerxd_l0_marpat_desert_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_browerxd_l0_marpat_desert_vest.paa",
				""
			};
		};
	};

///darren\\\

	class 22ndODST_Modpack_odst_vest_darren: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] D.Darren";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_darren_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"\z\22nd\addons\odst_units\data\vest\odst_darren_l0_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_darren: 22ndODST_Modpack_odst_vest_darren
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat D.Darren";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_darren_l0_marpat_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_darren_l0_marpat_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_desert_darren: 22ndODST_Modpack_odst_vest_darren
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat Desert D.Darren";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_darren_l0_marpat_desert_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_darren_l0_marpat_desert_vest.paa",
				""
			};
		};
	};

///barkhorn\\\

	class 22ndODST_Modpack_odst_vest_barkhorn: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] G.Barkhorn";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_barkhorn_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"\z\22nd\addons\odst_units\data\vest\odst_barkhorn_l0_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_barkhorn: 22ndODST_Modpack_odst_vest_barkhorn
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat G.Barkhorn";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_barkhorn_l0_marpat_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_barkhorn_l0_marpat_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_desert_barkhorn: 22ndODST_Modpack_odst_vest_barkhorn
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat Desert G.Barkhorn";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_barkhorn_l0_marpat_desert_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_barkhorn_l0_marpat_desert_vest.paa",
				""
			};
		};
	};

///litch\\\

	class 22ndODST_Modpack_odst_vest_litch: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] J.Litch";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_litch_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_litch_l0_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_litch: 22ndODST_Modpack_odst_vest_litch
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat J.Litch";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_litch_l0_marpat_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_litch_l0_marpat_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_desert_litch: 22ndODST_Modpack_odst_vest_litch
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat Desert J.Litch";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_litch_l0_marpat_desert_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_litch_l0_marpat_desert_vest.paa",
				""
			};
		};
	};

///nathan\\\

	class 22ndODST_Modpack_odst_vest_nathan: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] N.Parker";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_nathan_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_nathan_l0_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_nathan: 22ndODST_Modpack_odst_vest_nathan
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat N.Parker";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_nathan_l0_marpat_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_nathan_l0_marpat_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_desert_nathan: 22ndODST_Modpack_odst_vest_nathan
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat Desert N.Parker";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_nathan_l0_marpat_desert_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_nathan_l0_marpat_desert_vest.paa",
				""
			};
		};
	};

///whooda\\\

	class 22ndODST_Modpack_odst_vest_whooda: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] J.Whooda";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_whooda_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_whooda_l0_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_whooda: 22ndODST_Modpack_odst_vest_whooda
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat J.Whooda";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_whooda_l0_marpat_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_whooda_l0_marpat_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_desert_whooda: 22ndODST_Modpack_odst_vest_whooda
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat Desert J.Whooda";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_whooda_l0_marpat_desert_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_whooda_l0_marpat_desert_vest.paa",
				""
			};
		};
	};

///default\\\

class 22ndODST_Modpack_odst_vest_default: OPTRE_UNSC_ODST_Vest_Base
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Vest";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_default_l0_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_default_l0_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_default: 22ndODST_Modpack_odst_vest_default
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat Vest";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_default_l0_marpat_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_default_l0_marpat_vest.paa",
				""
			};
		};
	};

	class 22ndODST_Modpack_odst_vest_marpat_desert_default: 22ndODST_Modpack_odst_vest_default
	{
		scope=2;
		author="kripto202";
		displayName="[22ndODST_ModpackODST] Marpat Desert Vest";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_nade"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22nd\addons\odst_units\data\vest\odst_default_l0_marpat_desert_vest.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_nade"
			};
			hiddenSelectionsTextures[]=
			{
				"z\22nd\addons\odst_units\data\vest\odst_default_l0_marpat_desert_vest.paa",
				""
			};
		};
	};
