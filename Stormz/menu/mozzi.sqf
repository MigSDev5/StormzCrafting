
private ["_hastools","_hasitems1","_hasitems2","_hasitems3","_isInside","_dir","_location"];

_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = ["PartVRotor"] call player_checkItems;
_hasitems2 = ["PartEngine"] call player_checkItems;
_hasitems3 = ["PartFueltank"] call player_checkItems;

_isInside = [player,"Building"] call fnc_isInsideBuilding;

if (_isInside) exitWith {titleText ["You must be outside to craft a mozzi !!", "PLAIN DOWN", 3];};

if (call {_hastools && _hasitems1 && _hasitems2 && _hasitems3}) then {

    {
	    player removeMagazine _x;
  	} count ["PartVRotor","PartEngine","PartFueltank"];

	_dir = getdir player;
    _location = getPos player;
    _location = [(_location select 0)+8*sin(_dir),(_location select 1)+8*cos(_dir),0]; 

    _object = createVehicle ["CSJ_GyroC", _location, [], 0, "CAN_COLLIDE"];
    _object setVariable["ObjectUID","1",true];


}else{
    titleText ["You need Rotor, Engine, FuelTank and Toolbox to craft this!!", "PLAIN DOWN", 3];
};
