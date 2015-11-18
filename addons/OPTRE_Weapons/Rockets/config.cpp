class CfgPatches
{
	class OPTRE_Weapons_Rockets
	{
		units[]={};
		weapons[]=
		{
			"OPTRE_M41_SSR",
			"OPTRE_M41_SSR_G"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"A3_Weapons_F"
		};
		author="Article 2 Studios";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F;
	class launch_Titan_base;
	class launch_RPG32_F;
	class WeaponSlotsInfo;
	class OPTRE_M41_SSR: launch_RPG32_F
	{
		dlc="OPTRE";
		scope=2;
		author="Article 2 Studios";
		displayname="M41 SSR MAV/AW";
		descriptionshort="Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon";
		class Library
		{
			libtextdesc="The M41 Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon formally known as the Medium Anti-Vehicle / Assault Weapon, Bore 102mm, M41 Surface-to-Surface Rocket Launcher, is a heavy ordnance weapon of the UNSC arsenal";
		};
		magazines[]=
		{
			"OPTRE_M41_Twin_HEAT",
			"OPTRE_M41_Twin_HEAP"
		};
		picture="\OPTRE_weapons\rockets\icons\launcher.paa";
		model="\OPTRE_Weapons\Rockets\M41_launcher_loaded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm"
		};
		drysound[]=
		{
			"A3\sounds_f\weapons\other\dry6",
			0.031622801,
			1,
			10
		};
		soundfly[]=
		{
			"A3\sounds_f\weapons\rockets\rocket_fly_1",
			0.316228,
			1.5,
			700
		};
		modelOptics="\A3\Weapons_F\acc\reticle_NLAW.p3d";
		recoil="recoil_single_law";
		aiRateOfFire=5;
		aiRateOfFireDistance=250;
		reloadaction="ReloadRPG";
		reloadmagazinesound[]=
		{
			"A3\sounds_f\weapons\rockets\titan_reload_final",
			0.56234097,
			1,
			50
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=200;
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",
					2.5,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			reloadtime=1;
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.80000001;
			maxRange=600;
			maxRangeProbab=0.1;
		};
	};
	class OPTRE_M41_SSR_G: OPTRE_M41_SSR
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayname="M41 SSR MAV/AW (Guided)";
		descriptionshort="Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon (Guided)";
		magazines[]=
		{
			"OPTRE_M41_Twin_HEAT_G"
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.316228,
			2.5
		};
		canLock=2;
		weaponLockDelay=3;
		weaponLockSystem=1;
		cmImmunity=0.89999998;
		lockAcquire=0;
		cursor="missile";
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		reloadaction="ReloadRPG";
		reloadmagazinesound[]=
		{
			"A3\sounds_f\weapons\rockets\titan_reload_final",
			0.56234097,
			1,
			50
		};
		aiRateOfFire=10;
		aiRateOfFireDistance=2500;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=210;
		};
	};
};
