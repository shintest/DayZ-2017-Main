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
	class 2017_BUS
	{
		units[]=
		{
			"2017_Ikarus1",
			"2017_Ikarus2"
		};
		weapons[]={};
		requiredVersion=0.100000;
		requiredAddons[]=
		{
			"CAWheeled2"
		};
	};
};
class CfgAddons
{
	class 2017_BUS
	{
		list[]=
		{
			"2017_BUS"
		};
	};
};
class CfgVehicleClasses
{
	class CJ187_BW_Wheeled
	{
		displayName="2017 - Vehicles";
	};
};
class CfgVehicles
{
	class Ikarus;
	class 2017_Ikarus1: Ikarus
	{
		scope=2;
		displayName="2017 Bus White";
		vehicleClass="CJ187_BW_Wheeled";
		Icon="\2017_BUS\icon\icon_BUS_bw_ca.paa";
		side=1;
		faction="BIS_Ger";
		crew="Functionary1_EP1";
		rarityUrban = 0.600000;
		typicalCargo[]= {};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[]=
		{
		"2017_BUS\Data\bus_exterior_eciv_co.paa"
		};
	};
	class 2017_Ikarus2: 2017_Ikarus1
	{
		displayName="2017 Bus Green)";
		Icon="\2017_BUS\icon\icon_BUS_bw_ca.paa";
		hiddenSelections[] =
		{
		"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
		"2017_BUS\Data\bus_exterior_eciv_co2.paa"
		};
	};
};
