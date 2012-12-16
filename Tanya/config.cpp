class CfgPatches
{
           class Tanya
           {
                        units[]={"TanyaBO";
                        weapons[]={};
                        requiredVersion = 1.000000;
                        requiredAddons[]={};
            };
};

class CfgVehicleClasses
{
            class Tanya
            {
                         displayName="Tanya";
            };
};

class CfgSkeletons
{
            class Default;
class Head
{
isDiscrete = 0;
skeletonInherit = "";
skeletonBones[] =
{
"neck","",
"neck1","neck",
  "head","neck1",
"lBrow","head",
"mBrow","head",
"rBrow","head",
"lMouth","head",
"mMouth","head",
"rMouth","head",
"eyelids","head",
"LLip","head"
};
};
class OFP2_ManSkeleton
{
isDiscrete = 0;
skeletonInherit = "Head";
skeletonBones[] =
{
"weapon","",
"launcher","",
"Camera","",
"Spine","",
"Spine1","",
"Spine2","",
"Spine3","",
"Pelvis","",

//Left upper side
"LeftShoulder","",
"LeftArm","",
"LeftArmRoll","",
"LeftForeArm","",
"LeftForeArmRoll","",
"LeftHand","",
"LeftHandRing","",
"LeftHandRing1","",
"LeftHandRing2","",
"LeftHandRing3","",
"LeftHandPinky1","",
"LeftHandPinky2","",
"LeftHandPinky3","",
"LeftHandMiddle1","",
"LeftHandMiddle2","",
"LeftHandMiddle3","",
"LeftHandIndex1","",
"LeftHandIndex2","",
"LeftHandIndex3","",
"LeftHandThumb1","",
"LeftHandThumb2","",
"LeftHandThumb3","",

//Right upper side
"RightShoulder","",
"RightArm","",
"RightArmRoll","",
"RightForeArm","",
"RightForeArmRoll","",
"RightHand","",
"RightHandRing","",
"RightHandRing1","",
"RightHandRing2","",
"RightHandRing3","",
"RightHandPinky1","",
"RightHandPinky2","",
"RightHandPinky3","",
"RightHandMiddle1","",
"RightHandMiddle2","",
"RightHandMiddle3","",
"RightHandIndex1","",
"RightHandIndex2","",
"RightHandIndex3","",
"RightHandThumb1","",
"RightHandThumb2","",
"RightHandThumb3","",

//Left lower side
"LeftUpLeg","",
"LeftUpLegRoll","",
"LeftLeg","",
"LeftLegRoll","",
"LeftFoot","",
"LeftToeBase","",

//Right lower side
"RightUpLeg","",
"RightUpLegRoll","",
"RightLeg","",
"RightLegRoll","",
"RightFoot","",
"RightToeBase",""
};
};

class Flag: Default {};
class FlagCarrier: Default
{
skeletonInherit = "Default";
skeletonBones[] =
{
"stozar","",
"vlajka",""
};
};
};

class CfgModels{
	class Default{
		sections[] = {};
		sectionsInherit="";
		};

	class flag_vojak : Default{
		sections[] = {"latka"};
		};
		class Head: Default
		{
		sections[] =
		{
		"osobnost",
		"brejle";
		};

	skeletonName = "Head";
	};
		class ArmaMan : Default
		{
		sections[] =
		{
		Head_Injury","Body_Injury","l_leg_injury"
		,"l_arm_injury","r_arm_injury","r_leg_injury","clan"
		};
		 skeletonName = "OFP2_ManSkeleton";
	};

		class TanyaBO: ArmaMan {};
	};


class CfgVehicles
{
 	class Land;

	class Man: Land	{
		class ViewPilot;
		};
	class CAManBase;
	class Soldier_Crew_PMC;

	class TanyaBO: Soldier_Crew_PMC {
		vehicleClass = "Tanya";
		displayName = "Tanya Survivor";
		model = "\tanya\tanyaBO.p3d";
		scope = 2;
		nightVision = 1;
		camouflage = 0.500000;
		Picture = "\tanya\data\Ico\i_SF_CA.paa";
		Icon = "\tanya\data\map_ico\i_komandos_CA.paa";
		Gender = Female;
		nameSound = "blackOp";
		attendant = true;
		woman = true;
		canHideBodies = true;
		canDeactivateMines = true;
		canCarryBackPack = 1;
		weapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
                        
	class Library {
		libTextDesc = "Tanya.";
		};

	class Wounds {
			tex[] = {};
			mat[] = {"tanya\data\us_soldier_sabass_body.rvmat", "tanya\data\us_soldier_sabass_body_wound1.rvmat", "tanya\data\us_soldier_sabass_body_wound2.rvmat", "tanya\data\us_spec_hhl.rvmat", "tanya\data\us_spec_hhl_wound1.rvmat", "tanya\data\us_spec_hhl_wound2.rvmat"};
		};
	};
};
