class CfgPatches
{
	class OPTRE_Weapons_Ammo
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"A3_Weapons_F"
		};
		author="Article 2 Studios";
		magazines[]=
		{
			"OPTRE_6Rnd_8Gauge_Pellets",
			"OPTRE_6Rnd_8Gauge_Slugs",
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_20Rnd_ALIM_Gauss_Slugs",
			"OPTRE_1Rnd_MAC_Rounds",
			"OPTRE_3Rnd_102mm_rockets",
			"OPTRE_6Rnd_65mm_rockets"
		};
		ammo[]=
		{
			"OPTRE_B_762x51_Ball",
			"OPTRE_B_762x51_Tracer",
			"OPTRE_B_95x40_Ball",
			"OPTRE_B_95x40_Tracer",
			"OPTRE_B_145x114_APFSDS",
			"OPTRE_B_145x114_HVAP",
			"OPTRE_B_145x114_HEDP",
			"OPTRE_B_127x40_Ball",
			"OPTRE_B_127x40_AP",
			"OPTRE_B_127x40_Tracer",
			"OPTRE_8Gauge_Pellets",
			"OPTRE_8Gauge_Slugs",
			"OPTRE_B_5x23_Caseless",
			"OPTRE_B_5x23_Caseless_Tracer",
			"OPTRE_B_5x23_Caseless_JHP",
			"OPTRE_B_5x23_Caseless_FMJ",
			"OPTRE_25x130mm_Slug",
			"OPTRE_MAC_Round",
			"OPTRE_B_127x99_Ball",
			"OPTRE_M41_Rocket_ATGM",
			"OPTRE_M_65mm_AA",
			"OPTRE_M41_Rocket_HEAT",
			"OPTRE_M41_Rocket_HEAT_Guided",
			"OPTRE_M41_Rocket_HEAP",
			"OPTRE_G_M9_Frag",
			"OPTRE_G_M2_Smoke",
			"OPTRE_G_M2_RSmoke",
			"OPTRE_G_M2_GSmoke",
			"OPTRE_G_M2_BSmoke",
			"OPTRE_G_M2_OSmoke",
			"OPTRE_G_M2_YSmoke",
			"OPTRE_G_M2_PSmoke",
			"OPTRE_G_M8_Flare"
		};
	};
};
class CfgAmmo
{
	class ShotgunBase;
	class BulletBase;
	class ShotDeployBase;
	class B_762x51_Ball;
	class B_9x21_Ball;
	class B_127x99_Ball;
	class B_35mm_AA;
	class B_40mm_GPR;
	class B_40mm_APFSDS;
	class B_40mm_APFSDS_Tracer_Green;
	class B_coil_20g_spike;
	class GrenadeHand;
	class SmokeShell;
	class R_PG32V_F;
	class R_TBG32V_F;
	class M_Titan_AT;
	class M_Titan_AA;
	class M_NLAW_AT_F;
	class Sh_120mm_APFSDS;
	class OPTRE_B_762x51_Ball: B_762x51_Ball
	{
		hit=11;
		typicalSpeed=500;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_762x51_Tracer: OPTRE_B_762x51_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_95x40_Ball: B_762x51_Ball
	{
		hit=12;
		caliber=2;
		typicalSpeed=500;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_95x40_Tracer: OPTRE_B_95x40_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_145x114_APFSDS: B_127x99_Ball
	{
		hit=60;
		cartridge="FxCartridge_127";
		caliber=8;
		typicalSpeed=700;
		airFriction=0;
		timeToLive=15;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=1.5;
		tracerStartTime=0;
		tracerEndTime=15;
		class CamShakeExplode
		{
			power="(20^0.5)";
			duration="((round (20^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((20^0.5)*3)";
		};
		class CamShakeHit
		{
			power=20;
			duration="((round (20^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class OPTRE_B_145x114_HVAP: OPTRE_B_145x114_APFSDS
	{
		hit=75;
		caliber=15;
		typicalSpeed=700;
		airFriction=-4.9999999e-005;
	};
	class OPTRE_B_145x114_HEDP: OPTRE_B_145x114_APFSDS
	{
		hit=50;
		indirectHit=20;
		explosive=0.75;
		indirectHitRange=1;
		caliber=0.1;
		typicalSpeed=700;
		airFriction=-0.00015000001;
		timeToLive=15;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=2;
		deflecting=5;
		explosionEffects="ExploAmmoExplosion";
		craterEffects="ExploAmmoCrater";
		explosionSoundEffect="DefaultExplosion";
	};
	class OPTRE_B_127x40_Ball: B_762x51_Ball
	{
		hit=10;
		indirectHit=8;
		indirectHitRange=0.1;
		explosive=0;
		cartridge="FxCartridge_small";
		caliber=0.75;
		typicalSpeed=200;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_127x40_AP: OPTRE_B_127x40_Ball
	{
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		caliber=2;
	};
	class OPTRE_B_127x40_Tracer: OPTRE_B_127x40_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_8Gauge_Pellets: ShotgunBase
	{
		hit=10;
		typicalSpeed=100;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=1;
		audibleFire=1;
		visibleFireTime=2;
		cost=1;
		tracerColor[]={1,0.050000001,0.050000001,1};
		tracerColorR[]={1,0.050000001,0.050000001,1};
		airFriction=-0.0049999999;
		caliber=0.25;
		cartridge="FxCartridge_slug";
		dispersion=0.025;
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="ImpactPlaster";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitConcrete="ImpactConcrete";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
		};
		soundImpactDefault1[]=
		{
			"A3\Sounds_F\weapons\Grenades\Grenade_Roll",
			2.5118864,
			1,
			200
		};
		impactGroundSoft[]=
		{
			"soundImpactDefault1",
			1
		};
		impactGroundHard[]=
		{
			"soundImpactDefault1",
			1
		};
		impactMan[]=
		{
			"soundImpactDefault1",
			1
		};
		impactIron[]=
		{
			"soundImpactDefault1",
			1
		};
		impactArmor[]=
		{
			"soundImpactDefault1",
			1
		};
		impactBuilding[]=
		{
			"soundImpactDefault1",
			1
		};
		impactFoliage[]=
		{
			"soundImpactDefault1",
			1
		};
		impactWood[]=
		{
			"soundImpactDefault1",
			1
		};
		impactGlass[]=
		{
			"soundImpactDefault1",
			1
		};
		impactGlassArmored[]=
		{
			"soundImpactDefault1",
			1
		};
		impactConcrete[]=
		{
			"soundImpactDefault1",
			1
		};
		impactRubber[]=
		{
			"soundImpactDefault1",
			1
		};
		impactPlastic[]=
		{
			"soundImpactDefault1",
			1
		};
		impactDefault[]=
		{
			"soundImpactDefault1",
			1
		};
		impactMetal[]=
		{
			"soundImpactDefault1",
			1
		};
		impactMetalplate[]=
		{
			"soundImpactDefault1",
			1
		};
		impactWater[]=
		{
			"soundImpactDefault1",
			1
		};
		soundDefault1[]=
		{
			"A3\sounds_f\weapons\hits\concrete_1",
			1.1220185,
			1,
			60
		};
		soundDefault2[]=
		{
			"A3\sounds_f\weapons\hits\concrete_2",
			1.1220185,
			1,
			60
		};
		soundDefault3[]=
		{
			"A3\sounds_f\weapons\hits\concrete_3",
			1.1220185,
			1,
			60
		};
		soundDefault4[]=
		{
			"A3\sounds_f\weapons\hits\concrete_4",
			1.1220185,
			1,
			60
		};
		soundDefault5[]=
		{
			"A3\sounds_f\weapons\hits\concrete_5",
			1.1220185,
			1,
			60
		};
		soundDefault6[]=
		{
			"A3\sounds_f\weapons\hits\concrete_6",
			1.1220185,
			1,
			60
		};
		soundDefault7[]=
		{
			"A3\sounds_f\weapons\hits\concrete_7",
			1.1220185,
			1,
			60
		};
		soundDefault8[]=
		{
			"A3\sounds_f\weapons\hits\concrete_8",
			1.1220185,
			1,
			60
		};
		soundGroundSoft1[]=
		{
			"A3\sounds_f\weapons\hits\soft_ground_1",
			1.2589254,
			1,
			60
		};
		soundGroundSoft2[]=
		{
			"A3\sounds_f\weapons\hits\soft_ground_2",
			1.2589254,
			1,
			60
		};
		soundGroundSoft3[]=
		{
			"A3\sounds_f\weapons\hits\soft_ground_3",
			1.2589254,
			1,
			60
		};
		soundGroundSoft4[]=
		{
			"A3\sounds_f\weapons\hits\soft_ground_4",
			1.2589254,
			1,
			60
		};
		soundGroundSoft5[]=
		{
			"A3\sounds_f\weapons\hits\soft_ground_5",
			1.2589254,
			1,
			60
		};
		soundGroundSoft6[]=
		{
			"A3\sounds_f\weapons\hits\soft_ground_6",
			1.2589254,
			1,
			60
		};
		soundGroundSoft7[]=
		{
			"A3\sounds_f\weapons\hits\soft_ground_7",
			1.2589254,
			1,
			60
		};
		soundGroundSoft8[]=
		{
			"A3\sounds_f\weapons\hits\soft_ground_8",
			1.2589254,
			1,
			60
		};
		soundGroundHard1[]=
		{
			"A3\sounds_f\weapons\hits\hard_ground_1",
			1.4125376,
			1,
			80
		};
		soundGroundHard2[]=
		{
			"A3\sounds_f\weapons\hits\hard_ground_2",
			1.4125376,
			1,
			80
		};
		soundGroundHard3[]=
		{
			"A3\sounds_f\weapons\hits\hard_ground_3",
			1.4125376,
			1,
			80
		};
		soundGroundHard4[]=
		{
			"A3\sounds_f\weapons\hits\hard_ground_4",
			1.4125376,
			1,
			80
		};
		soundGroundHard5[]=
		{
			"A3\sounds_f\weapons\hits\hard_ground_5",
			1.4125376,
			1,
			80
		};
		soundGroundHard6[]=
		{
			"A3\sounds_f\weapons\hits\hard_ground_6",
			1.4125376,
			1,
			80
		};
		soundGroundHard7[]=
		{
			"A3\sounds_f\weapons\hits\hard_ground_7",
			1.4125376,
			1,
			80
		};
		soundGroundHard8[]=
		{
			"A3\sounds_f\weapons\hits\hard_ground_8",
			1.4125376,
			1,
			80
		};
		soundMetal1[]=
		{
			"A3\sounds_f\weapons\hits\metal_1",
			1.9952624,
			1,
			150
		};
		soundMetal2[]=
		{
			"A3\sounds_f\weapons\hits\metal_2",
			1.9952624,
			1,
			150
		};
		soundMetal3[]=
		{
			"A3\sounds_f\weapons\hits\metal_3",
			1.9952624,
			1,
			150
		};
		soundMetal4[]=
		{
			"A3\sounds_f\weapons\hits\metal_4",
			1.9952624,
			1,
			150
		};
		soundMetal5[]=
		{
			"A3\sounds_f\weapons\hits\metal_5",
			1.9952624,
			1,
			150
		};
		soundMetal6[]=
		{
			"A3\sounds_f\weapons\hits\metal_6",
			1.9952624,
			1,
			150
		};
		soundMetal7[]=
		{
			"A3\sounds_f\weapons\hits\metal_5",
			1.9952624,
			1,
			150
		};
		soundMetal8[]=
		{
			"A3\sounds_f\weapons\hits\metal_6",
			1.9952624,
			1,
			150
		};
		soundGlass1[]=
		{
			"A3\sounds_f\weapons\hits\glass_1",
			1.4125376,
			1,
			100
		};
		soundGlass2[]=
		{
			"A3\sounds_f\weapons\hits\glass_2",
			1.4125376,
			1,
			100
		};
		soundGlass3[]=
		{
			"A3\sounds_f\weapons\hits\glass_3",
			1.4125376,
			1,
			100
		};
		soundGlass4[]=
		{
			"A3\sounds_f\weapons\hits\glass_4",
			1.4125376,
			1,
			100
		};
		soundGlass5[]=
		{
			"A3\sounds_f\weapons\hits\glass_5",
			1.4125376,
			1,
			100
		};
		soundGlass6[]=
		{
			"A3\sounds_f\weapons\hits\glass_6",
			1.4125376,
			1,
			100
		};
		soundGlass7[]=
		{
			"A3\sounds_f\weapons\hits\glass_7",
			1.4125376,
			1,
			100
		};
		soundGlass8[]=
		{
			"A3\sounds_f\weapons\hits\glass_8",
			1.4125376,
			1,
			100
		};
		soundGlassArmored1[]=
		{
			"A3\sounds_f\weapons\hits\glass_arm_1",
			1.2589254,
			1,
			60
		};
		soundGlassArmored2[]=
		{
			"A3\sounds_f\weapons\hits\glass_arm_2",
			1.2589254,
			1,
			60
		};
		soundGlassArmored3[]=
		{
			"A3\sounds_f\weapons\hits\glass_arm_3",
			1.2589254,
			1,
			60
		};
		soundGlassArmored4[]=
		{
			"A3\sounds_f\weapons\hits\glass_arm_4",
			1.2589254,
			1,
			60
		};
		soundGlassArmored5[]=
		{
			"A3\sounds_f\weapons\hits\glass_arm_5",
			1.2589254,
			1,
			60
		};
		soundGlassArmored6[]=
		{
			"A3\sounds_f\weapons\hits\glass_arm_6",
			1.2589254,
			1,
			60
		};
		soundGlassArmored7[]=
		{
			"A3\sounds_f\weapons\hits\glass_arm_7",
			1.2589254,
			1,
			60
		};
		soundGlassArmored8[]=
		{
			"A3\sounds_f\weapons\hits\glass_arm_8",
			1.2589254,
			1,
			60
		};
		soundVehiclePlate1[]=
		{
			"A3\sounds_f\weapons\hits\metal_plate_1",
			1.9952624,
			1,
			150
		};
		soundVehiclePlate2[]=
		{
			"A3\sounds_f\weapons\hits\metal_plate_2",
			1.9952624,
			1,
			150
		};
		soundVehiclePlate3[]=
		{
			"A3\sounds_f\weapons\hits\metal_plate_3",
			1.9952624,
			1,
			150
		};
		soundVehiclePlate4[]=
		{
			"A3\sounds_f\weapons\hits\metal_plate_4",
			1.9952624,
			1,
			150
		};
		soundVehiclePlate5[]=
		{
			"A3\sounds_f\weapons\hits\metal_plate_5",
			1.9952624,
			1,
			150
		};
		soundVehiclePlate6[]=
		{
			"A3\sounds_f\weapons\hits\metal_plate_6",
			1.9952624,
			1,
			150
		};
		soundVehiclePlate7[]=
		{
			"A3\sounds_f\weapons\hits\metal_plate_7",
			1.9952624,
			1,
			150
		};
		soundVehiclePlate8[]=
		{
			"A3\sounds_f\weapons\hits\metal_plate_8",
			1.9952624,
			1,
			150
		};
		soundWood1[]=
		{
			"A3\sounds_f\weapons\hits\wood_1",
			1.4125376,
			1,
			80
		};
		soundWood2[]=
		{
			"A3\sounds_f\weapons\hits\wood_2",
			1.4125376,
			1,
			80
		};
		soundWood3[]=
		{
			"A3\sounds_f\weapons\hits\wood_3",
			1.4125376,
			1,
			80
		};
		soundWood4[]=
		{
			"A3\sounds_f\weapons\hits\wood_4",
			1.4125376,
			1,
			80
		};
		soundWood5[]=
		{
			"A3\sounds_f\weapons\hits\wood_5",
			1.4125376,
			1,
			80
		};
		soundWood6[]=
		{
			"A3\sounds_f\weapons\hits\wood_6",
			1.4125376,
			1,
			80
		};
		soundWood7[]=
		{
			"A3\sounds_f\weapons\hits\wood_7",
			1.4125376,
			1,
			80
		};
		soundWood8[]=
		{
			"A3\sounds_f\weapons\hits\wood_8",
			1.4125376,
			1,
			80
		};
		soundHitBody1[]=
		{
			"A3\sounds_f\weapons\hits\body_1",
			1.5848932,
			1,
			10
		};
		soundHitBody2[]=
		{
			"A3\sounds_f\weapons\hits\body_2",
			1.5848932,
			1,
			10
		};
		soundHitBody3[]=
		{
			"A3\sounds_f\weapons\hits\body_3",
			1.5848932,
			1,
			10
		};
		soundHitBody4[]=
		{
			"A3\sounds_f\weapons\hits\body_4",
			1.5848932,
			1,
			10
		};
		soundHitBody5[]=
		{
			"A3\sounds_f\weapons\hits\body_5",
			1.5848932,
			1,
			10
		};
		soundHitBody6[]=
		{
			"A3\sounds_f\weapons\hits\body_6",
			1.5848932,
			1,
			10
		};
		soundHitBody7[]=
		{
			"A3\sounds_f\weapons\hits\body_7",
			1.5848932,
			1,
			10
		};
		soundHitBody8[]=
		{
			"A3\sounds_f\weapons\hits\body_8",
			1.5848932,
			1,
			10
		};
		soundHitBuilding1[]=
		{
			"A3\sounds_f\weapons\hits\building_1",
			1,
			1,
			60
		};
		soundHitBuilding2[]=
		{
			"A3\sounds_f\weapons\hits\building_2",
			1,
			1,
			60
		};
		soundHitBuilding3[]=
		{
			"A3\sounds_f\weapons\hits\building_3",
			1,
			1,
			60
		};
		soundHitBuilding4[]=
		{
			"A3\sounds_f\weapons\hits\building_4",
			1,
			1,
			60
		};
		soundHitBuilding5[]=
		{
			"A3\sounds_f\weapons\hits\building_5",
			1,
			1,
			60
		};
		soundHitBuilding6[]=
		{
			"A3\sounds_f\weapons\hits\building_6",
			1,
			1,
			60
		};
		soundHitBuilding7[]=
		{
			"A3\sounds_f\weapons\hits\building_7",
			1,
			1,
			60
		};
		soundHitBuilding8[]=
		{
			"A3\sounds_f\weapons\hits\building_8",
			1,
			1,
			60
		};
		soundHitFoliage1[]=
		{
			"A3\sounds_f\weapons\hits\foliage_1",
			0.70794576,
			1,
			20
		};
		soundHitFoliage2[]=
		{
			"A3\sounds_f\weapons\hits\foliage_2",
			0.70794576,
			1,
			20
		};
		soundHitFoliage3[]=
		{
			"A3\sounds_f\weapons\hits\foliage_3",
			0.70794576,
			1,
			20
		};
		soundHitFoliage4[]=
		{
			"A3\sounds_f\weapons\hits\foliage_4",
			0.70794576,
			1,
			20
		};
		soundHitFoliage5[]=
		{
			"A3\sounds_f\weapons\hits\foliage_5",
			0.70794576,
			1,
			20
		};
		soundHitFoliage6[]=
		{
			"A3\sounds_f\weapons\hits\foliage_6",
			0.70794576,
			1,
			20
		};
		soundHitFoliage7[]=
		{
			"A3\sounds_f\weapons\hits\foliage_7",
			0.70794576,
			1,
			20
		};
		soundHitFoliage8[]=
		{
			"A3\sounds_f\weapons\hits\foliage_8",
			0.70794576,
			1,
			20
		};
		soundPlastic1[]=
		{
			"A3\sounds_f\weapons\hits\plastic_1",
			1,
			1,
			70
		};
		soundPlastic2[]=
		{
			"A3\sounds_f\weapons\hits\plastic_2",
			1,
			1,
			70
		};
		soundPlastic3[]=
		{
			"A3\sounds_f\weapons\hits\plastic_3",
			1,
			1,
			70
		};
		soundPlastic4[]=
		{
			"A3\sounds_f\weapons\hits\plastic_4",
			1,
			1,
			70
		};
		soundPlastic5[]=
		{
			"A3\sounds_f\weapons\hits\plastic_5",
			1,
			1,
			70
		};
		soundPlastic6[]=
		{
			"A3\sounds_f\weapons\hits\plastic_6",
			1,
			1,
			70
		};
		soundPlastic7[]=
		{
			"A3\sounds_f\weapons\hits\plastic_7",
			1,
			1,
			70
		};
		soundPlastic8[]=
		{
			"A3\sounds_f\weapons\hits\plastic_8",
			1,
			1,
			70
		};
		soundConcrete1[]=
		{
			"A3\sounds_f\weapons\hits\concrete_1",
			1,
			1,
			70
		};
		soundConcrete2[]=
		{
			"A3\sounds_f\weapons\hits\concrete_2",
			1,
			1,
			70
		};
		soundConcrete3[]=
		{
			"A3\sounds_f\weapons\hits\concrete_3",
			1,
			1,
			70
		};
		soundConcrete4[]=
		{
			"A3\sounds_f\weapons\hits\concrete_4",
			1,
			1,
			70
		};
		soundConcrete5[]=
		{
			"A3\sounds_f\weapons\hits\concrete_5",
			1,
			1,
			70
		};
		soundConcrete6[]=
		{
			"A3\sounds_f\weapons\hits\concrete_6",
			1,
			1,
			70
		};
		soundConcrete7[]=
		{
			"A3\sounds_f\weapons\hits\concrete_7",
			1,
			1,
			70
		};
		soundConcrete8[]=
		{
			"A3\sounds_f\weapons\hits\concrete_8",
			1,
			1,
			70
		};
		soundRubber1[]=
		{
			"A3\sounds_f\weapons\hits\tyre_1",
			0.89125091,
			1,
			50
		};
		soundRubber2[]=
		{
			"A3\sounds_f\weapons\hits\tyre_2",
			0.89125091,
			1,
			50
		};
		soundRubber3[]=
		{
			"A3\sounds_f\weapons\hits\tyre_3",
			0.89125091,
			1,
			50
		};
		soundRubber4[]=
		{
			"A3\sounds_f\weapons\hits\tyre_4",
			0.89125091,
			1,
			50
		};
		soundRubber5[]=
		{
			"A3\sounds_f\weapons\hits\tyre_5",
			0.89125091,
			1,
			50
		};
		soundRubber6[]=
		{
			"A3\sounds_f\weapons\hits\tyre_6",
			0.89125091,
			1,
			50
		};
		soundRubber7[]=
		{
			"A3\sounds_f\weapons\hits\tyre_7",
			0.89125091,
			1,
			50
		};
		soundRubber8[]=
		{
			"A3\sounds_f\weapons\hits\tyre_8",
			0.89125091,
			1,
			50
		};
		soundWater1[]=
		{
			"A3\sounds_f\weapons\hits\water_01",
			1,
			1,
			40
		};
		soundWater2[]=
		{
			"A3\sounds_f\weapons\hits\water_02",
			1,
			1,
			40
		};
		soundWater3[]=
		{
			"A3\sounds_f\weapons\hits\water_03",
			1,
			1,
			40
		};
		soundWater4[]=
		{
			"A3\sounds_f\weapons\hits\water_04",
			1,
			1,
			40
		};
		soundWater5[]=
		{
			"A3\sounds_f\weapons\hits\water_05",
			1,
			1,
			40
		};
		soundWater6[]=
		{
			"A3\sounds_f\weapons\hits\water_06",
			1,
			1,
			40
		};
		soundWater7[]=
		{
			"A3\sounds_f\weapons\hits\water_07",
			1,
			1,
			40
		};
		soundWater8[]=
		{
			"A3\sounds_f\weapons\hits\water_08",
			1,
			1,
			40
		};
		hitGroundSoft[]=
		{
			"soundGroundSoft1",
			0.2,
			"soundGroundSoft2",
			0.2,
			"soundGroundSoft3",
			0.1,
			"soundGroundSoft4",
			0.1,
			"soundGroundSoft5",
			0.1,
			"soundGroundSoft6",
			0.1,
			"soundGroundSoft7",
			0.1,
			"soundGroundSoft8",
			0.1
		};
		hitGroundHard[]=
		{
			"soundGroundHard1",
			0.2,
			"soundGroundHard2",
			0.2,
			"soundGroundHard3",
			0.1,
			"soundGroundHard4",
			0.1,
			"soundGroundHard5",
			0.1,
			"soundGroundHard6",
			0.1,
			"soundGroundHard7",
			0.1,
			"soundGroundHard8",
			0.1
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.125,
			"soundHitBody2",
			0.125,
			"soundHitBody3",
			0.125,
			"soundHitBody4",
			0.125,
			"soundHitBody5",
			0.125,
			"soundHitBody6",
			0.125,
			"soundHitBody7",
			0.125,
			"soundHitBody8",
			0.125
		};
		hitArmor[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitBuilding[]=
		{
			"soundHitBuilding1",
			0.2,
			"soundHitBuilding2",
			0.2,
			"soundHitBuilding3",
			0.1,
			"soundHitBuilding4",
			0.1,
			"soundHitBuilding5",
			0.1,
			"soundHitBuilding6",
			0.1,
			"soundHitBuilding7",
			0.1,
			"soundHitBuilding8",
			0.1
		};
		hitFoliage[]=
		{
			"soundHitFoliage1",
			0.125,
			"soundHitFoliage2",
			0.125,
			"soundHitFoliage3",
			0.125,
			"soundHitFoliage4",
			0.125,
			"soundHitFoliage5",
			0.125,
			"soundHitFoliage6",
			0.125,
			"soundHitFoliage7",
			0.125,
			"soundHitFoliage8",
			0.125
		};
		hitWood[]=
		{
			"soundWood1",
			0.125,
			"soundWood2",
			0.125,
			"soundWood3",
			0.125,
			"soundWood4",
			0.125,
			"soundWood5",
			0.125,
			"soundWood6",
			0.125,
			"soundWood7",
			0.125,
			"soundWood8",
			0.125
		};
		hitGlass[]=
		{
			"soundGlass1",
			0.125,
			"soundGlass2",
			0.125,
			"soundGlass3",
			0.125,
			"soundGlass4",
			0.125,
			"soundGlass5",
			0.125,
			"soundGlass6",
			0.125,
			"soundGlass7",
			0.125,
			"soundGlass8",
			0.125
		};
		hitGlassArmored[]=
		{
			"soundGlassArmored1",
			0.125,
			"soundGlassArmored2",
			0.125,
			"soundGlassArmored3",
			0.125,
			"soundGlassArmored4",
			0.125,
			"soundGlassArmored5",
			0.125,
			"soundGlassArmored6",
			0.125,
			"soundGlassArmored7",
			0.125,
			"soundGlassArmored8",
			0.125
		};
		hitConcrete[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitRubber[]=
		{
			"soundRubber1",
			0.125,
			"soundRubber2",
			0.125,
			"soundRubber3",
			0.125,
			"soundRubber4",
			0.125,
			"soundRubber5",
			0.125,
			"soundRubber6",
			0.125,
			"soundRubber7",
			0.125,
			"soundRubber8",
			0.125
		};
		hitPlastic[]=
		{
			"soundPlastic1",
			0.125,
			"soundPlastic2",
			0.125,
			"soundPlastic3",
			0.125,
			"soundPlastic4",
			0.125,
			"soundPlastic5",
			0.125,
			"soundPlastic6",
			0.125,
			"soundPlastic7",
			0.125,
			"soundPlastic8",
			0.125
		};
		hitDefault[]=
		{
			"soundDefault1",
			0.2,
			"soundDefault2",
			0.2,
			"soundDefault3",
			0.1,
			"soundDefault4",
			0.1,
			"soundDefault5",
			0.1,
			"soundDefault6",
			0.1,
			"soundDefault7",
			0.1,
			"soundDefault8",
			0.1
		};
		hitMetal[]=
		{
			"soundMetal1",
			0.125,
			"soundMetal2",
			0.125,
			"soundMetal3",
			0.125,
			"soundMetal4",
			0.125,
			"soundMetal5",
			0.125,
			"soundMetal6",
			0.125,
			"soundMetal7",
			0.125,
			"soundMetal8",
			0.125
		};
		hitMetalplate[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitWater[]=
		{
			"soundWater1",
			0.125,
			"soundWater2",
			0.125,
			"soundWater3",
			0.125,
			"soundWater4",
			0.125,
			"soundWater5",
			0.125,
			"soundWater6",
			0.125,
			"soundWater7",
			0.125,
			"soundWater8",
			0.125
		};
		bulletFly1[]=
		{
			"A3\sounds_f\weapons\hits\bullet_by_1",
			0.79432821,
			1,
			30
		};
		bulletFly2[]=
		{
			"A3\sounds_f\weapons\hits\bullet_by_2",
			0.79432821,
			1,
			30
		};
		bulletFly3[]=
		{
			"A3\sounds_f\weapons\hits\bullet_by_3",
			0.79432821,
			1,
			30
		};
		bulletFly4[]=
		{
			"A3\sounds_f\weapons\hits\bullet_by_4",
			0.79432821,
			1,
			30
		};
		bulletFly5[]=
		{
			"A3\sounds_f\weapons\hits\bullet_by_5",
			0.79432821,
			1,
			30
		};
		bulletFly6[]=
		{
			"A3\sounds_f\weapons\hits\bullet_by_6",
			0.79432821,
			1,
			30
		};
		bulletFly7[]=
		{
			"A3\sounds_f\weapons\hits\bullet_by_7",
			0.79432821,
			1,
			30
		};
		bulletFly8[]=
		{
			"A3\sounds_f\weapons\hits\bullet_by_8",
			0.79432821,
			1,
			30
		};
		bulletFly[]=
		{
			"bulletFly1",
			0.16599999,
			"bulletFly2",
			0.16599999,
			"bulletFly3",
			0.16599999,
			"bulletFly4",
			0.16599999,
			"bulletFly5",
			0.16599999,
			"bulletFly6",
			0.167,
			"bulletFly7",
			0.16599999,
			"bulletFly8",
			0.167
		};
	};
	class OPTRE_8Gauge_Slugs: B_762x51_Ball
	{
		hit=14;
		cartridge="FxCartridge_slug";
		caliber=2;
		typicalSpeed=200;
	};
	class OPTRE_B_5x23_Caseless: B_9x21_Ball
	{
		hit=9;
		typicalSpeed=200;
		caliber=0.75;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_5x23_Caseless_Tracer: OPTRE_B_5x23_Caseless
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_5x23_Caseless_JHP: OPTRE_B_5x23_Caseless
	{
		hit=10;
		caliber=0.15000001;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_5x23_Caseless_FMJ: OPTRE_B_5x23_Caseless
	{
		hit=9.5;
		caliber=1.5;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_25x130mm_Slug: B_40mm_APFSDS_Tracer_Green
	{
		scope=2;
		caliber=100;
		cost=1000;
		explosive=0;
		hit=500;
		whistleOnFire=1;
		whistleDist=14;
		timeToLive=1.5;
		tracerScale=3;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		tracersEvery=1;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		indirectHit=50;
		indirectHitRange=0.25;
		CraterEffects="HEShellCrater";
		CraterWaterEffects="ImpactEffectsWaterHE";
		ExplosionEffects="HEShellExplosion";
		allowAgainstInfantry=1;
		soundHit1[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_1",
			3.1622777,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_2",
			3.1622777,
			1,
			2000
		};
		soundHit3[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_3",
			3.1622777,
			1,
			2000
		};
		soundHit4[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_4",
			3.1622777,
			1,
			2000
		};
		soundHit5[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_5",
			3.1622777,
			1,
			2000
		};
		soundHit6[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_6",
			3.1622777,
			1,
			2000
		};
		soundHit7[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_7",
			3.1622777,
			1,
			2000
		};
		soundHit8[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_8",
			3.1622777,
			1,
			2000
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.13,
			"soundHit2",
			0.13,
			"soundHit3",
			0.13,
			"soundHit4",
			0.13,
			"soundHit5",
			0.12,
			"soundHit6",
			0.12,
			"soundHit7",
			0.12,
			"soundHit8",
			0.12
		};
		class HitEffects
		{
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="ImpactConcreteSabot";
			hitConcrete="ImpactConcreteSabot";
			hitGroundSoft="ImpactEffectsGroundSabot";
			hitGroundHard="ImpactEffectsGroundSabot";
			default_mat="ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power="(180^0.5)";
			duration="((round (180^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((180^0.5)*3)";
		};
		class CamShakeHit
		{
			power=180;
			duration="((round (180^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(120^0.25)";
			duration="((round (120^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class OPTRE_MAC_Round: OPTRE_25x130mm_Slug
	{
		caliber=1000;
		hit=10000;
		airFriction=0;
		allowAgainstInfantry=1;
		audibleFire=100;
		canLock=0;
		cost=10000;
		deflecting=0;
		explosive=0.5;
		fuseDistance=1;
		indirectHit=1000;
		indirectHitRange=100;
		maxSpeed=1000;
		typicalSpeed=1000;
		sideAirFriction=0;
		simulation="shotSubmunitions";
		suppressionRadiusBulletClose=100;
		suppressionRadiusHit=100;
		timeToLive=60;
		tracerStartTime=0;
		supersonicCrackNear[]=
		{
			"A3\sounds_f\weapons\hits\sscrack1",
			1,
			1,
			40
		};
		supersonicCrackFar[]=
		{
			"A3\sounds_f\weapons\hits\sscrack2",
			1,
			1,
			100
		};
		visibleFire=100;
		visibleFireTime=300;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		CraterEffects="HEShellCrater";
		CraterWaterEffects="ImpactEffectsWaterHE";
		ExplosionEffects="HEShellExplosion";
	};
	class OPTRE_B_127x99_Ball: B_127x99_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
	};
	class OPTRE_M41_Rocket_ATGM: M_Titan_AT
	{
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		hit=700;
		indirectHit=10;
		indirectHitRange=2.5;
		explosive=0.80000001;
		irLock=1;
		airLock=1;
		laserLock=1;
		manualControl=1;
		maxControlRange=10000;
		initTime=0.1;
		trackOversteer=1;
		trackLead=0.85000002;
		timeToLive=30;
		maneuvrability=6;
		simulationStep=0.0020000001;
		airFriction=0.083999999;
		sideAirFriction=0.050000001;
		maxSpeed=200;
		thrustTime=3;
		thrust=130;
		fuseDistance=50;
		whistleDist=4;
	};
	class OPTRE_M_65mm_AA: M_Titan_AA
	{
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl_fly.p3d";
		hit=500;
		indirectHit=50;
		indirectHitRange=5;
		airLock=2;
		irLock=0;
	};
	class OPTRE_M41_Rocket_HEAT: R_PG32V_F
	{
		model="OPTRE_weapons\rockets\M41_rocket.p3d";
		hit=700;
		indirectHit=10;
		indirectHitRange=2.5;
		explosive=0.80000001;
		cost=500;
		airFriction=0.075000003;
		sideAirFriction=0.075000003;
		maxSpeed=150;
		initTime=0;
		thrustTime=0.1;
		thrust=0.1;
		fuseDistance=15;
		simulationStep=0.02;
		airLock=0;
		irLock=0;
		laserLock=0;
		timeToLive=30;
		maneuvrability=0;
		allowAgainstInfantry=0;
	};
	class OPTRE_M41_Rocket_HEAT_Guided: OPTRE_M41_Rocket_HEAT
	{
		model="OPTRE_weapons\rockets\M41_rocket.p3d";
		irLock=2;
		airLock=2;
		laserLock=2;
		canLock=2;
		maneuvrability=10;
		simulationStep=0.0020000001;
		trackOversteer=1;
		trackLead=1;
		initTime=0.25;
		thrustTime=2.5;
		thrust=385;
	};
	class OPTRE_M41_Rocket_HEAP: OPTRE_M41_Rocket_HEAT
	{
		model="OPTRE_weapons\rockets\M41_rocket.p3d";
		hit=300;
		indirectHit=100;
		indirectHitRange=15;
		explosive=1;
		allowAgainstInfantry=1;
		coefGravity=0;
		airFriction=0;
	};
	class OPTRE_G_M9_Frag: GrenadeHand
	{
		model="\OPTRE_Weapons\explosives\m9_grenade.p3d";
		hit=10;
		indirectHit=10;
		indirectHitRange=8;
		visibleFire=0.5;
		audibleFire=0.050000001;
		visibleFireTime=1;
		fuseDistance=0;
	};
	class OPTRE_G_M2_Smoke: SmokeShell
	{
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		smokeColor[]={1,1,1,1};
	};
	class OPTRE_G_M2_RSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]={0.84380001,0.1383,0.1353,1};
	};
	class OPTRE_G_M2_GSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]={0.21250001,0.62580001,0.48910001,1};
	};
	class OPTRE_G_M2_BSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]={0.1183,0.1867,1,1};
	};
	class OPTRE_G_M2_OSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]={0.66970003,0.22750001,0.10053,1};
	};
	class OPTRE_G_M2_YSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]={0.98830003,0.86059999,0.071900003,1};
	};
	class OPTRE_G_M2_PSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]={0.4341,0.1388,0.41440001,1};
	};
	class OPTRE_G_M8_Flare: OPTRE_G_M2_Smoke
	{
		model="\OPTRE_Weapons\explosives\m8_flare.p3d";
	};
};
class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class 150Rnd_762x51_Box;
	class 30Rnd_45ACP_Mag_SMG_01;
	class 30Rnd_120mm_APFSDS_shells;
	class 5Rnd_GAT_missiles;
	class 4Rnd_GAA_missiles;
	class HandGrenade;
	class SmokeShell;
	class RPG32_HE_F;
	class RPG32_F;
	class NLAW_F;
	class Titan_AA;
	class Titan_AT;
	class OPTRE_60Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\AR\AR_Magazine.p3d";
		displayname="60Rnd 7.62x51mm Magazine";
		displaynameshort="7.62x51mm";
		ammo="OPTRE_B_762x51_Ball";
		count=60;
		initspeed=700;
		picture="\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort="60 Round Magazine<br>7.62x51mm";
		mass=18;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class OPTRE_60Rnd_762x51_Mag_Tracer: OPTRE_60Rnd_762x51_Mag
	{
		dlc="OPTRE";
		displayname="60Rnd 7.62x51mm Magazine (Tracers)";
		displaynameshort="7.62x51mm Tracer";
		ammo="OPTRE_B_762x51_Tracer";
		descriptionshort="60 Round Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=60;
	};
	class OPTRE_32Rnd_762x51_Mag: OPTRE_60Rnd_762x51_Mag
	{
		dlc="OPTRE";
		displayname="32Rnd 762x51mm Magazine";
		count=32;
		initspeed=800;
		descriptionshort="32 Round Magazine<br>7.62x51mm<br>(Increased Muzzle Velocity)";
		mass=10;
	};
	class OPTRE_32Rnd_762x51_Mag_Tracer: OPTRE_60Rnd_762x51_Mag_Tracer
	{
		dlc="OPTRE";
		displayname="32Rnd 762x51mm Magazine";
		count=32;
		descriptionshort="32 Round Magazine<br>7.62x51mm<br>(Increased Muzzle Velocity)<br>Tracer";
		mass=10;
	};
	class OPTRE_100Rnd_762x51_Box: OPTRE_60Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\MG\magazine_1.p3d";
		displayname="100Rnd 7.62x51mm Box Magazine";
		displaynameshort="7.62x51mm";
		ammo="OPTRE_B_762x51_Ball";
		count=100;
		initspeed=850;
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="100 Round Box Magazine<br>7.62x51mm";
		mass=40;
		tracersEvery=0;
		lastRoundsTracer=10;
	};
	class OPTRE_100Rnd_762x51_Box_Tracer: OPTRE_100Rnd_762x51_Box
	{
		dlc="OPTRE";
		displayname="100Rnd 7.62x51mm Box Magazine (Tracers)";
		displaynameshort="7.62x51mm Tracer";
		ammo="OPTRE_B_762x51_Tracer";
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="100 Round Box Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=100;
	};
	class OPTRE_15Rnd_762x51_Mag: OPTRE_60Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\AR\AR_Magazine.p3d";
		displayname="15Rnd 7.62x51mm Magazine";
		displaynameshort="7.62x51mm";
		ammo="OPTRE_B_762x51_Ball";
		count=15;
		initspeed=900;
		picture="\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort="15 Round Magazine<br>7.62x51mm";
		mass=10;
		tracersEvery=0;
		lastRoundsTracer=3;
	};
	class OPTRE_15Rnd_762x51_Mag_Tracer: OPTRE_15Rnd_762x51_Mag
	{
		dlc="OPTRE";
		displayname="15Rnd 7.62x51mm Magazine (Tracers)";
		displaynameshort="7.62x51mm Tracer";
		ammo="OPTRE_B_762x51_Tracer";
		descriptionshort="15 Round Magazine<br>7.62x51mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=15;
	};
	class OPTRE_36Rnd_95x40_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\BR\BR_Magazine.p3d";
		displayname="36Rnd 9.5x40mm Magazine";
		displaynameshort="9.5x40mm";
		ammo="OPTRE_B_95x40_Ball";
		count=36;
		initspeed=800;
		picture="\OPTRE_weapons\br\icons\magazine.paa";
		descriptionshort="36 Round Magazine<br>9.5x40mm";
		mass=8;
		tracersEvery=0;
		lastRoundsTracer=6;
	};
	class OPTRE_36Rnd_95x40_Mag_Tracer: OPTRE_36Rnd_95x40_Mag
	{
		dlc="OPTRE";
		displayname="36Rnd 9.5x40mm Magazine (Tracers)";
		displaynameshort="9.5x40mm Tracer";
		ammo="OPTRE_B_95x40_Tracer";
		descriptionshort="36 Round Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=36;
	};
	class OPTRE_100Rnd_95x40_Box: 150Rnd_762x51_Box
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\MG\magazine_1.p3d";
		displayname="100Rnd 9.5x40mm Box Magazine";
		displaynameshort="9.5x40mm";
		ammo="OPTRE_B_95x40_Ball";
		count=100;
		initspeed=900;
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="100 Round Box Magazine<br>9.5x40mm";
		mass=35;
		tracersEvery=0;
		lastRoundsTracer=10;
	};
	class OPTRE_100Rnd_95x40_Box_Tracer: OPTRE_100Rnd_95x40_Box
	{
		dlc="OPTRE";
		displayname="100Rnd 9.5x40mm Box Magazine (Tracers)";
		displaynameshort="9.5x40mm Tracer";
		ammo="OPTRE_B_95x40_Tracer";
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="100 Round Box Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=100;
	};
	class OPTRE_200Rnd_95x40_Box: OPTRE_100Rnd_95x40_Box
	{
		dlc="OPTRE";
		displayname="200Rnd 9.5x40mm Box Magazine";
		count=200;
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="200 Round Box Magazine<br>9.5x40mm";
		mass=70;
	};
	class OPTRE_200Rnd_95x40_Box_Tracer: OPTRE_200Rnd_95x40_Box
	{
		dlc="OPTRE";
		displayname="200Rnd 9.5x40mm Box Magazine (Tracers)";
		displaynameshort="9.5x40mm Tracer";
		ammo="OPTRE_B_95x40_Tracer";
		picture="\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort="200 Round Box Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery=1;
		lastRoundsTracer=200;
	};
	class OPTRE_8Rnd_127x40_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\pistol\m6_Magazine.p3d";
		displayname="8Rnd 12.7x40mm Magazine";
		displaynameshort="12.7x40mm";
		ammo="OPTRE_B_127x40_Ball";
		count=8;
		initspeed=400;
		picture="\OPTRE_weapons\pistol\icons\magazine.paa";
		descriptionshort="8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass=8;
		tracersEvery=0;
		lastRoundsTracer=2;
	};
	class OPTRE_8Rnd_127x40_AP_Mag: OPTRE_8Rnd_127x40_Mag
	{
		dlc="OPTRE";
		displayname="8Rnd 12.7x40mm AP Magazine";
		displaynameshort="12.7x40mm AP";
		ammo="OPTRE_B_127x40_AP";
		descriptionshort="8 Round Magazine<br>12.7x40mm<br>Armor Piercing";
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	class OPTRE_8Rnd_127x40_Mag_Tracer: OPTRE_8Rnd_127x40_Mag
	{
		dlc="OPTRE";
		displayname="8Rnd 12.7x40mm Magazine (Tracers)";
		displaynameshort="12.7x40mm Tracer";
		picture="\OPTRE_weapons\pistol\icons\magazine.paa";
		ammo="OPTRE_B_127x40_Tracer";
		descriptionshort="8 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive Tracer";
		tracersEvery=1;
		lastRoundsTracer=8;
	};
	class OPTRE_12Rnd_127x40_Mag: OPTRE_8Rnd_127x40_Mag
	{
		dlc="OPTRE";
		displayname="12Rnd 12.7x40mm Magazine";
		count=12;
		initspeed=300;
		descriptionshort="12 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass=8;
		tracersEvery=0;
		lastRoundsTracer=2;
	};
	class OPTRE_16Rnd_127x40_Mag: OPTRE_12Rnd_127x40_Mag
	{
		dlc="OPTRE";
		displayname="16Rnd 12.7x40mm Magazine";
		count=16;
		descriptionshort="16 Round Magazine<br>12.7x40mm<br>Semi-Armor Piercing High Explosive";
		mass=9;
		tracersEvery=0;
		lastRoundsTracer=2;
	};
	class OPTRE_6Rnd_8Gauge_Pellets: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Shotgun\Shell_mag_S.p3d";
		scope=2;
		displayname="6Rnd 8 Gauge Pellets";
		displaynameshort="8 Gauge Pellets";
		ammo="OPTRE_8Gauge_Pellets";
		count=6;
		initspeed=400;
		picture="\a3\weapons_F\data\ui\m_12gauge_ca.paa";
		descriptionshort="6 Rounds of 8 Gauge Pellets";
		mass=10;
	};
	class OPTRE_6Rnd_8Gauge_Slugs: OPTRE_6Rnd_8Gauge_Pellets
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\Shotgun\Shell_mag_P.p3d";
		displayname="6Rnd 8 Gauge Slugs";
		displaynameshort="8 Gauge Slugs";
		ammo="OPTRE_8Gauge_Slugs";
		initspeed=600;
		picture="\a3\weapons_F\data\ui\m_12gauge_slugs_ca.paa";
		descriptionshort="6 Rounds of 8 Gauge Slugs";
		mass=10;
	};
	class OPTRE_12Rnd_8Gauge_Pellets: OPTRE_6Rnd_8Gauge_Pellets
	{
		dlc="OPTRE";
		displayname="12Rnd 8 Gauge Pellets";
		count=12;
		descriptionshort="12 Rounds of 8 Gauge Pellets";
		mass=16;
	};
	class OPTRE_12Rnd_8Gauge_Slugs: OPTRE_6Rnd_8Gauge_Slugs
	{
		dlc="OPTRE";
		displayname="12Rnd 8 Gauge Slugs";
		count=12;
		descriptionshort="12 Rounds of 8 Gauge Slugs";
		mass=16;
	};
	class OPTRE_60Rnd_5x23mm_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\smg\m7_Magazine.p3d";
		displayname="60Rnd 5x23mm Magazine";
		displaynameshort="5x23mm";
		ammo="OPTRE_B_5x23_Caseless";
		count=60;
		initspeed=500;
		picture="\OPTRE_weapons\smg\icons\magazine.paa";
		descriptionshort="60 Round Magazine<br>5x23mm";
		mass=8;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class OPTRE_60Rnd_5x23mm_Mag_tracer: OPTRE_60Rnd_5x23mm_Mag
	{
		dlc="OPTRE";
		displayname="60Rnd 5x23mm Magazine (Tracers)";
		displaynameshort="5x23mm Tracer";
		ammo="OPTRE_B_5x23_Caseless_Tracer";
		descriptionshort="60 Round Magazine<br>5x23mm<br>Tracer";
		lastRoundsTracer=60;
	};
	class OPTRE_48Rnd_5x23mm_Mag: OPTRE_60Rnd_5x23mm_Mag
	{
		dlc="OPTRE";
		displayname="48Rnd 5x23mm Magazine";
		count=48;
		descriptionshort="48 Round Magazine<br>5x23mm";
		mass=6;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class OPTRE_48Rnd_5x23mm_JHP_Mag: OPTRE_48Rnd_5x23mm_Mag
	{
		dlc="OPTRE";
		displayname="48Rnd 5x23mm (JHP) Magazine";
		displaynameshort="5x23mm JHP";
		ammo="OPTRE_B_5x23_Caseless_JHP";
		descriptionshort="48 Round Magazine<br>5x23mm<br>Jacketed Hollow Point";
	};
	class OPTRE_48Rnd_5x23mm_FMJ_Mag: OPTRE_48Rnd_5x23mm_Mag
	{
		dlc="OPTRE";
		displayname="48Rnd 5x23mm (FMJ) Magazine";
		displaynameshort="5x23mm FMJ";
		initspeed=600;
		ammo="OPTRE_B_5x23_Caseless_FMJ";
		descriptionshort="48 Round Magazine<br>5x23mm<br>Full Metal Jacket";
	};
	class OPTRE_48Rnd_5x23mm_Mag_tracer: OPTRE_48Rnd_5x23mm_Mag
	{
		dlc="OPTRE";
		displayname="48Rnd 5x23mm Magazine (Tracers)";
		displaynameshort="5x23mm Tracer";
		ammo="OPTRE_B_5x23_Caseless_Tracer";
		descriptionshort="48 Round Magazine<br>5x23mm<br>Tracer";
		lastRoundsTracer=48;
	};
	class OPTRE_4Rnd_145x114_APFSDS_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\AR\AR_Magazine.p3d";
		displayname="4Rnd 14.5x114mm APFSDS Magazine";
		displaynameshort="APFSDS";
		ammo="OPTRE_B_145x114_APFSDS";
		count=4;
		initspeed=2000;
		picture="\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort="4 Round Magazine<br>14.5x114mm<br>Armor Piercing Fin-Stabilized Disposable Shell";
		mass=15;
		tracersEvery=1;
		lastRoundsTracer=4;
	};
	class OPTRE_4Rnd_145x114_HVAP_Mag: OPTRE_4Rnd_145x114_APFSDS_Mag
	{
		dlc="OPTRE";
		displayname="4Rnd 14.5x114mm HVAP Magazine";
		displaynameshort="HVAP";
		ammo="OPTRE_B_145x114_HVAP";
		initspeed=1750;
		descriptionshort="4 Round Magazine<br>14.5x114mm<br>High Velocity Armor Piercing";
		mass=15;
	};
	class OPTRE_4Rnd_145x114_HEDP_Mag: OPTRE_4Rnd_145x114_HVAP_Mag
	{
		dlc="OPTRE";
		displayname="4Rnd 14.5x114mm HEDP Magazine";
		displaynameshort="HEDP";
		ammo="OPTRE_B_145x114_HEDP";
		initspeed=1500;
		descriptionshort="4 Round Magazine<br>14.5x114mm<br>High Explosive Dual Purpose";
		mass=25;
	};
	class OPTRE_20Rnd_ALIM_Gauss_Slugs: 30Rnd_120mm_APFSDS_shells
	{
		dlc="OPTRE";
		scope=2;
		displayName="20Rnd ALIM Gauss Slugs";
		displayNameShort="25x130mm Slug";
		ammo="OPTRE_25x130mm_Slug";
		initSpeed=13680;
		count=20;
	};
	class OPTRE_1Rnd_MAC_Rounds: OPTRE_20Rnd_ALIM_Gauss_Slugs
	{
		dlc="OPTRE";
		displayName="MAC Round";
		displayNameShort="MAC Round";
		ammo="OPTRE_MAC_Round";
		initSpeed=1000;
		count=1;
	};
	class OPTRE_3Rnd_102mm_rockets: 5Rnd_GAT_missiles
	{
		dlc="OPTRE";
		scope=2;
		displayName="3Rnd 102mm Guided HEAT Rockets";
		displayNameShort="102mm Guided HEAT";
		count=3;
		ammo="OPTRE_M41_Rocket_ATGM";
		initSpeed=60;
		maxLeadSpeed=60;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class OPTRE_6Rnd_65mm_rockets: 4Rnd_GAA_missiles
	{
		dlc="OPTRE";
		scope=2;
		displayName="6Rnd 65mm Guided AA Rockets";
		displayNameShort="65mm Guided AA";
		count=6;
		ammo="OPTRE_M_65mm_AA";
		initSpeed=80;
		maxLeadSpeed=320;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class OPTRE_M41_Twin_HEAT: RPG32_HE_F
	{
		dlc="OPTRE";
		displayname="M19 HEAT Twin Rockets";
		displaynameshort="HEAT";
		descriptionshort="High Explosive Anti Tank<br/>Un-guided";
		ammo="OPTRE_M41_Rocket_HEAT";
		picture="\OPTRE_weapons\rockets\icons\rocket.paa";
		model="\OPTRE_Weapons\Rockets\M41_tube.p3d";
		modelSpecial="\OPTRE_Weapons\Rockets\M41_launcher_loaded.p3d";
		count=2;
		mass=80;
		initSpeed=350;
	};
	class OPTRE_M41_Twin_HEAT_G: OPTRE_M41_Twin_HEAT
	{
		dlc="OPTRE";
		displayname="M19 HEAT Guided Twin Rockets";
		displaynameshort="HEAT (Guided)";
		picture="\OPTRE_weapons\rockets\icons\rocket.paa";
		descriptionshort="High Explosive Anti Tank<br/>Guided";
		model="\OPTRE_Weapons\Rockets\M41_tube.p3d";
		count=2;
		mass=90;
		ammo="OPTRE_M41_Rocket_ATGM";
		initSpeed=60;
		maxLeadSpeed=60;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		weaponSoundEffect="DefaultRifle";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class OPTRE_M41_Twin_HEAP: RPG32_HE_F
	{
		dlc="OPTRE";
		ammo="OPTRE_M41_Rocket_HEAP";
		model="\OPTRE_Weapons\Rockets\M41_case.p3d";
		descriptionshort="High Explosive Anti Personnel<br/>Un-guided";
		displayname="M19 HEAP Twin Rockets";
		picture="\OPTRE_weapons\rockets\icons\rocket.paa";
		modelSpecial="\OPTRE_Weapons\Rockets\M41_launcher_loaded.p3d";
		displaynameshort="HEAP";
		mass=80;
		count=2;
		initSpeed=350;
	};
	class OPTRE_M9_Frag: HandGrenade
	{
		dlc="OPTRE";
		ammo="OPTRE_G_M9_Frag";
		mass=8;
		displayName="M9 HE-DP Grenade";
		descriptionShort="Hand Grenade";
		displayNameShort="M9 Frag";
		model="\OPTRE_Weapons\explosives\m9_grenade.p3d";
		picture="\OPTRE_Weapons\explosives\icons\m9.paa";
		count=1;
		nameSound="handgrenade";
		initSpeed=20;
	};
	class OPTRE_M2_Smoke: SmokeShell
	{
		dlc="OPTRE";
		displayName="M2 Smoke Grenade (White)";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="OPTRE_G_M2_Smoke";
		descriptionShort="Smoke Grenade<br>White";
		displayNameShort="White Smoke";
		mass=4;
	};
	class OPTRE_M2_Smoke_Blue: OPTRE_M2_Smoke
	{
		dlc="OPTRE";
		displayName="M2 Smoke Grenade (Blue)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="OPTRE_G_M2_BSmoke";
		descriptionShort="Smoke Grenade<br>Blue";
		displayNameShort="Blue Smoke";
	};
	class OPTRE_M2_Smoke_Yellow: OPTRE_M2_Smoke
	{
		dlc="OPTRE";
		displayName="M2 Smoke Grenade (Yellow)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="OPTRE_G_M2_YSmoke";
		descriptionShort="Smoke Grenade<br>Yellow";
		displayNameShort="Yellow Smoke";
	};
	class OPTRE_M2_Smoke_Red: OPTRE_M2_Smoke
	{
		dlc="OPTRE";
		displayName="M2 Smoke Grenade (Red)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="OPTRE_G_M2_RSmoke";
		descriptionShort="Smoke Grenade<br>Red";
		displayNameShort="Red Smoke";
	};
	class OPTRE_M2_Smoke_Green: OPTRE_M2_Smoke
	{
		dlc="OPTRE";
		displayName="M2 Smoke Grenade (Green)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="OPTRE_G_M2_GSmoke";
		descriptionShort="Smoke Grenade<br>Green";
		displayNameShort="Green Smoke";
	};
	class OPTRE_M2_Smoke_Orange: OPTRE_M2_Smoke
	{
		dlc="OPTRE";
		displayName="M2 Smoke Grenade (Orange)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="OPTRE_G_M2_OSmoke";
		descriptionShort="Smoke Grenade<br>Orange";
		displayNameShort="Orange Smoke";
	};
	class OPTRE_M2_Smoke_Purple: OPTRE_M2_Smoke
	{
		dlc="OPTRE";
		displayName="M2 Smoke Grenade (Purple)";
		model="\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		ammo="OPTRE_G_M2_PSmoke";
		descriptionShort="Smoke Grenade<br>Purple";
		displayNameShort="Purple Smoke";
	};
	class OPTRE_M8_Flare: OPTRE_M2_Smoke
	{
		dlc="OPTRE";
		displayName="M8 Flare";
		model="\OPTRE_Weapons\explosives\m8_flare.p3d";
		ammo="OPTRE_G_M8_Flare";
		descriptionShort="Emergency Flare";
		displayNameShort="Flare";
	};
};
