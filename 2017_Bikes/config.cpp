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
	class 2017_Bikes
	{
		units[]=
		{
			"2017_Old_bike"
		};
		weapons[]={};
		requiredVersion=0.100000;
		requiredAddons[]=
		{
			"CAWheeled_E"
		};
	};
};
class CfgAddons
{
	class 2017_Bikes
	{
		list[]=
		{
			"2017_Bikes"
		};
	};
};
class CfgVehicleClasses
{
	class 2017_Bikes_shinkick
	{
		displayName="2017 - Vehicles";
	};
};
class CfgVehicles
{
	class Old_bike_TK_CIV_EP1;
	class 2017_Old_bike: Old_bike_TK_CIV_EP1
	{
		scope=2;
		displayName="2017 Old Bike";
		vehicleClass="2017_Bikes_shinkick";
		Icon = "\Ca\wheeled2\data\UI\Icon_MMT_CA.paa";
		side=1;
		faction = "BIS_TK_CIV";
		crew = "TK_CIV_Takistani01_EP1";
		rarityUrban = 0.600000;
		typicalCargo[]= {};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"2017_Bikes\data\old_bike_co.paa","2017_Bikes\data\old_bike_alfa_co.paa"};
	};
};
