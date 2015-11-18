class CfgPatches
{
	class OPTRE_Weapons_Items
	{
		units[]={};
		weapons[]=
		{
			"OPTRE_Biofoam",
			"OPTRE_MedKit"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core"
		};
		author="Article 2 Studios";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class ItemCore;
	class FirstAidKit;
	class InventoryFirstAidKitItem_Base_F;
	class Medikit;
	class MedikitItem;
	class OPTRE_Biofoam: FirstAidKit
	{
		dlc="OPTRE";
		scope=2;
		displayName="Medical Biofoam";
		picture="\OPTRE_weapons\items\icons\biofoam.paa";
		model="\OPTRE_Weapons\items\Biofoam.p3d";
		descriptionShort="Self-sealing coagulant foam to stop bleeding and haemorrhaging";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryFirstAidKitItem_Base_F
		{
			mass=6;
		};
	};
	class OPTRE_MedKit: Medikit
	{
		dlc="OPTRE";
		scope=2;
		displayName="Medical Pack";
		picture="\OPTRE_weapons\items\icons\medkit.paa";
		model="\OPTRE_Weapons\items\MedKit.p3d";
		descriptionShort="Medical Kit to treat all combat inflicted wounds and injuries";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: MedikitItem
		{
			mass=40;
		};
	};
};
