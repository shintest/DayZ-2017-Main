#define private		0
#define protected		1
#define public		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define true	1
#define false	0

class CfgPatches 
{
	class datsun_civil_apoc_shinkicker
	{ 
		units[] = {}; 
		requiredAddons[] = {CAData,CACharacters,CAWeapons,CASounds,CA_Anims_Char}; 
		requiredVersion = 1.0; 
	};
};

class CfgFactionClasses 
{
	class Apoc_Faction 
	{ 
		displayName = "Pickups"; 
		priority = 6; 
		side = "TCivilian"; 
	};

};

class CfgVehicleClasses
{
	class Hobo_Service_Name 
	{ 
		displayName = "2017 Vehicles";
	};
};

class CfgVehicles 
{
	class Land;
	class LandVehicle : Land
		{
		class NewTurret;
		class ViewPilot;
		};
	class Car: LandVehicle
	{
//		class PlateInfos {name="spz"; /*font<=fontPlate;*/ color[]={0,0,0,0.75};}
		class HitEngine {armor=0.4;material=60;name="motor";visual="motor";passThrough=1;};

		class HitRGlass {armor=0.3;material=-1;name="sklo predni P";passThrough=0;};
		class HitLGlass {armor=0.3;material=-1;name="sklo predni L";passThrough=0;};

		class HitBody {armor=1;material=51;name="NEkaroserie";visual="karoserie";passThrough=1;}; //disabled points from models
		class HitFuel {armor=0.3;material=51;name="palivo";passThrough=1;};

		class HitLFWheel {armor=0.15;material=-1;name="Levy predni tlumic";visual="Levy predni";passThrough=0;};
		class HitRFWheel {armor=0.15;material=-1;name="Pravy predni tlumic";visual="Pravy predni";passThrough=0;};

		class HitLF2Wheel {armor=0.15;material=-1;name="Levy dalsi tlumic";visual="Levy dalsi";passThrough=0;};
		class HitRF2Wheel {armor=0.15;material=-1;name="Pravy dalsi tlumic";visual="Pravy dalsi";passThrough=0;};

		class HitLMWheel {armor=0.15;material=-1;name="Levy prostredni tlumic";visual="Levy prostredni";passThrough=0;};
		class HitRMWheel {armor=0.15;material=-1;name="Pravy prostredni tlumic";visual="Pravy prostredni";passThrough=0;};

		class HitLBWheel {armor=0.15;material=-1;name="Levy zadni tlumic";visual="Levy zadni";passThrough=0;};
		class HitRBWheel {armor=0.15;material=-1;name="Pravy zadni tlumic";visual="Pravy zadni";passThrough=0;};

		dammageHalf[]=
		{
			"\ca\wheeled\data\jepp4x4_glass.paa","\ca\wheeled\data\jepp4x4_glassB.paa",
			"\ca\wheeled\data\jeep_kab_sklo1.paa","\ca\wheeled\data\jeep_kab_sklo1B.paa",
			"\ca\wheeled\data\jeep_kab_sklo2.paa","\ca\wheeled\data\jeep_kab_sklo2B.paa",
			"\ca\wheeled\data\scud_sklo.paa","\ca\wheeled\data\scud_skloB.paa",
			"\ca\wheeled\data\scud_sklo2.paa","\ca\wheeled\data\scud_sklo2B.paa",
			"\ca\wheeled\data\scud_sklo3.paa","\ca\wheeled\data\scud_sklo3B.paa",
			"\ca\wheeled\data\scud_sklo4.paa","\ca\wheeled\data\scud_sklo4B.paa"
		};
		dammageFull[]=
		{
			"\ca\wheeled\data\jepp4x4_glass.paa","\ca\wheeled\data\jepp4x4_glassB.paa",
			"\ca\wheeled\data\jeep_kab_sklo1.paa","\ca\wheeled\data\jeep_kab_sklo1B.paa",
			"\ca\wheeled\data\jeep_kab_sklo2.paa","\ca\wheeled\data\jeep_kab_sklo2B.paa",
			"\ca\wheeled\data\scud_sklo.paa","\ca\wheeled\data\scud_skloB.paa",
			"\ca\wheeled\data\scud_sklo2.paa","\ca\wheeled\data\scud_sklo2B.paa",
			"\ca\wheeled\data\scud_sklo3.paa","\ca\wheeled\data\scud_sklo3B.paa",
			"\ca\wheeled\data\scud_sklo4.paa","\ca\wheeled\data\scud_sklo4B.paa"
		};
		getInAction = GetInMedium;
		getOutAction = GetOutMedium;
		weapons[]={CarHorn};
		hasGunner = 0;
		gunnerHasFlares = false;
		soundEngine[] = {"\ca\wheeled\Data\Sound\mediumcar", db-60, 2.0};
		soundEnviron[] = {"\ca\wheeled\Data\Sound\noise", db-65, 0.25};
		soundCrash[] = {"\ca\wheeled\Data\Sound\crash2", db-10, 1};
		soundGear[] = {"\ca\wheeled\Data\Sound\shifter_v3", db-75, 1};
		supplyRadius = 1.2;
		driverAction = "ManActTestDriver";
		cargoAction[]= {"ManActTestDriver"};
		hideUnitInfo=false;
		class Exhausts;
		castDriverShadow = false;
    	castCargoShadow = false;
		};	
	class SkodaBase: Car
	{
		scope=private;
		picture="\Ca\wheeled\data\ico\skodovka_CA.paa";
		Icon="\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
		mapSize = 6;

		maxSpeed=110;

		side=TCivilian;
		nameSound="car";
		displayName=$STR_DN_SKODA;
		accuracy=0.50;

		armor=20;
		damageResistance = 0.01821;
		cost=2000;
		fuelCapacity=50;

		transportSoldier = 3;
		transportAmmo = 0;

		terrainCoef=6.0;

		soundEngine[]={\ca\wheeled\Data\Sound\4WD_Loop4,db-35,1.2};
		soundGear[]={\ca\wheeled\Data\Sound\shifter_v2,db-75,1};
		SoundGetIn[]={\ca\wheeled\Data\Sound\4WD_DoorOpenClose1,db-20,1};
		SoundGetOut[]={\ca\wheeled\Data\Sound\4WD_DoorOpenClose1,db-30,1};
		getInAction=GetInLow;
		getOutAction = GetOutLow;

		weapons[]={SportCarHorn};
		magazines[]={};
		driverAction = Skodovka_Driver;
		cargoAction[] = {Skodovka_Cargo01};
		cargoIsCoDriver[] = {true,false};
		typicalCargo[]={Civilian};
		hasGunner = 0;
		class Turrets {};

		class Library {libTextDesc = $STR_LIB_SKODA;};

	};
	
	class datsun_civil_apoc: SkodaBase
	{
		scope=public;
		model=\datsun_civil_apoc\datsun_civil_apoc;
		faction = "Apoc_Faction";
		vehicleClass = "Hobo_Service_Name";
		picture="\Ca\wheeled\data\ico\datsun1_civil_1_open_CA.paa";
		Icon="\Ca\wheeled\data\map_ico\icomap_datsun_CA.paa";
		side = "TCivilian"; 
		mapSize = 7;
		nameSound="pickup";

		displayName="Hobo Pickup";

		maxSpeed=125;
		turnCoef=2.5;
		soundEngine[]={\ca\wheeled\Data\Sound\Mini_3,db-20,0.8};
		soundGear[]={\ca\wheeled\Data\Sound\shifter_v2,db-75,1};
		SoundGetIn[]={\ca\wheeled\Data\Sound\4WD_DoorOpenClose1,db-20,1};
		SoundGetOut[]={\ca\wheeled\Data\Sound\4WD_DoorOpenClose1,db-30,1};
		typicalCargo[]={};
		crew = Civilian4;
		transportSoldier = 1;

		driverAction = datsun_driver;
		cargoAction[] = {Hilux_cargo01};

		class Library {libTextDesc = $STR_LIB_ADD_DATSUN;};
		dammageHalf[] =
		{
			\ca\wheeled\data\datsun_skla_ca.paa,\ca\wheeled\data\datsun_sklabr1_ca.paa,
			\ca\wheeled\data\datsun_skla_ca.paa,\ca\wheeled\data\datsun_sklabr1_ca.paa
		};
		dammageFull[] =
		{
			\ca\wheeled\data\datsun_skla_ca.paa,\ca\wheeled\data\datsun_sklabr2_ca.paa,
			\ca\wheeled\data\datsun_skla_ca.paa,\ca\wheeled\data\datsun_sklabr2_ca.paa
		};
		class Damage
		{
			tex[]={};
			mat[]={
				"ca\wheeled\data\detailmapy\datsun_interier.rvmat",
				"ca\wheeled\data\detailmapy\datsun_interier.rvmat",
				"ca\wheeled\data\detailmapy\datsun_interier_destruct.rvmat",
				"ca\wheeled\data\detailmapy\datsun_trup.rvmat",
				"ca\wheeled\data\detailmapy\datsun_trup.rvmat",
				"ca\wheeled\data\detailmapy\datsun_trup_destruct.rvmat"
			};
		};
	};
};

//begin model data

class CfgSkeletons
{
	class Car; // External class reference
	class pickupBones : Car
	{
		// skeletonInherit="";
		isDiscrete = 1;
		skeletonBones[]=
		{
			"volant",
			"",
			"levy predni tlumic",
			"",
			"pravy predni tlumic",
			"",
			"levy dalsi tlumic",
			"",
			"pravy dalsi tlumic",
			"",
			"levy predni zatoc",
			"levy predni tlumic",
			"pravy predni zatoc",
			"pravy predni tlumic",
			"levy dalsi zatoc",
			"levy dalsi tlumic",
			"pravy dalsi zatoc",
			"pravy dalsi tlumic",
			"levy prostredni tlumic",
			"",
			"pravy prostredni tlumic",
			"",
			"levy zadni tlumic",
			"",
			"pravy zadni tlumic",
			"",
			"levy predni",
			"levy predni zatoc",
			"pravy predni",
			"pravy predni zatoc",
			"levy dalsi",
			"levy dalsi zatoc",
			"pravy dalsi",
			"pravy dalsi zatoc",
			"levy prostredni",
			"levy prostredni tlumic",
			"pravy prostredni",
			"pravy prostredni tlumic",
			"levy zadni",
			"levy zadni tlumic",
			"pravy zadni",
			"pravy zadni tlumic",
			"ukaz_rychlo",
			"",
			"ukaz_rychlo2",
			"",
			"ukaz_rpm",
			"",
			"OtocVez",
			"",
			"OtocHlaven",
			"OtocVez",
			"fuel_01",
			"",
			"fuel_1",
			"",
			"prop_01",
			"",
			"prop_02",
			"",
			"prop_2",
			"",
			"prop_1",
			"",
			"damageHide",
			"",
			"damageVez",
			"OtocVez",
			"damageHlaven",
			"OtocHlaven"
		};
	};
};
class CfgModels
{
	class Car; // External class reference
	class datsun_civil_apoc: Car
	{
		sectionsInherit="";
		sections[]=
		{
			"ammo",
			"sklo predni p",
			"sklo predni l",
			"zadni svetlo",
			"brzdove svetlo",
			"spz",
			"karoserie",
			"motor",
			"zbran",
			"vez",
			"zbytek",
			"levy predni",
			"levy prostredni",
			"levy zadni",
			"pravy predni",
			"pravy prostredni",
			"pravy zadni",
			"clan",
			"clan_sign",
			"zasleh",
			"P svetlo",
			"L svetlo",
			"palivo"
		};
		skeletonName="pickupBones";
		class Animations
		{
			class damageHide
			{
				type="hide";
				source="damage";
				selection="damageHide";
			};
			class IndicatorSpeed
			{
				animPeriod=0;
				type="rotation";
				source="speed";
				selection="ukaz_rychlo";
				axis="osa_rychlo";
				memory=0;
				minValue=0.000000;
				maxValue=16.670000;
				angle0=0.000000;
				angle1=2.879793;
			};
			class IndicatorSpeed2
			{
				type="rotation";
				source="speed";
				selection="ukaz_rychlo2";
				axis="osa_rychlo2";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=16.670000;
				angle0=0;
				angle1="rad -240";
			};
			class IndicatorRPM
			{
				animPeriod=0;
				type="rotation";
				source="rpm";
				selection="ukaz_rpm";
				axis="osa_rpm";
				memory=0;
				minValue=0.000000;
				maxValue=1.000000;
				angle0=0.000000;
				angle1=2.967060;
			};
			class DrivingWheel
			{
				type="rotation";
				source="drivingWheel";
				selection="volant";
				begin="osaVolantZac";
				end="osaVolantKon";
				memory="false";
				animPeriod=0;
				minValue=-1;
				maxValue=1;
				angle0=-8;
				angle1=8;
			};
			class TurnFrontWheelR
			{
				type="rotationY";
				source="drivingWheel";
				selection="pravy predni zatoc";
				axis="pravy predni";
				memory="false";
				animPeriod=0;
				sourceAddress="loop";
				minValue="rad -180";
				maxValue="rad +180";
				angle0="rad +90";
				angle1="rad -90";
			};
			class TurnFrontWheelL: TurnFrontWheelR
			{
				selection="levy predni zatoc";
				axis="levy predni";
			};
			class TurnFrontWheelR2: TurnFrontWheelR
			{
				selection="pravy dalsi zatoc ";
				axis="pravy dalsi";
			};
			class TurnFrontWheelL2: TurnFrontWheelR
			{
				selection="levy dalsi zatoc ";
				axis="levy dalsi";
			};
			class FrontWheelR
			{
				type="rotationX";
				source="wheel";
				selection="pravy predni";
				axis="";
				memory="true";
				animPeriod=0;
				sourceAddress="loop";
				minValue=0;
				maxValue=1;
				angle0=0;
				angle1="rad -360";
			};
			class FrontWheel2R: FrontWheelR
			{
				selection="pravy dalsi";
			};
			class BackWheelR: FrontWheelR
			{
				selection="pravy zadni";
			};
			class BackWheel2R: FrontWheelR
			{
				selection="pravy prostredni";
			};
			class FrontWheelL: FrontWheelR
			{
				selection="levy predni";
			};
			class FrontWheel2L: FrontWheelR
			{
				selection="levy dalsi";
			};
			class BackWheelL: FrontWheelR
			{
				selection="levy zadni";
			};
			class BackWheel2L: FrontWheelR
			{
				selection="levy prostredni";
			};
			class FrontWheelDamperR
			{
				type="translationY";
				source="damper";
				selection="pravy predni tlumic";
				axis="";
				animPeriod=0;
				minValue=-1000;
				maxValue=1000;
			};
			class FrontWheelDamper2R: FrontWheelDamperR
			{
				selection="pravy dalsi tlumic";
			};
			class BackWheelDamperR: FrontWheelDamperR
			{
				selection="pravy zadni tlumic";
			};
			class BackWheelDamper2R: FrontWheelDamperR
			{
				selection="pravy prostredni tlumic";
			};
			class FrontWheelDamperL: FrontWheelDamperR
			{
				selection="levy predni tlumic";
			};
			class FrontWheelDamper2L: FrontWheelDamperR
			{
				selection="levy dalsi tlumic";
			};
			class BackWheelDamperL: FrontWheelDamperR
			{
				selection="levy zadni tlumic";
			};
			class BackWheelDamper2L: FrontWheelDamperR
			{
				selection="levy prostredni tlumic";
			};
			class damageVez: damageHide
			{
				selection="damageVez";
			};
			class damageHlaven: damageHide
			{
				selection="damageHlaven";
			};
		};
	};;
};