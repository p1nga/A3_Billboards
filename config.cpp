class CfgPatches
{
	class A3_Billboards
	{
		requiredAddons[] = {"A3_Signs_F"};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Building;
	class NonStrategic: Building
	{
		class AnimationSources;
	};
	
	class A3_Billboard_Base: NonStrategic
	{
		mapSize = 0.7;
		_generalMacro = "";
		scope = 1;
		model = "";
		vehicleClass = "Signs";
		destrType = "DestructTree";
		class AnimationSources: AnimationSources{};
		keepHorizontalPlacement = 1;
	};
	
	class A3_Billboard_Single_High: A3_Billboard_Base
	{
		_generalMacro = "A3_Billboard_Single_High";
		scope = 2;
		scopeCurator = 2;
		displayName = "Tri Sign (Single High)";
		model = "A3_Billboards\Tri_Single_High.p3d";
		author = "P1NGA";
		
		hiddenSelections[] = {"camo1","sign1","sign2","sign3"};
		hiddenSelectionsTextures[] = {"A3_Billboards\data\camo1_co.paa","A3_Billboards\data\advert\advert_arma01_co.paa","A3_Billboards\data\advert\advert_random01_co.paa","A3_Billboards\data\advert\advert_mikero01_co.paa"};
	};
};

enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};