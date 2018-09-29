private ["_hastools","_hasitems1","_hasitems2","_building","_ressource1","_ressource2","_ressource3"];

_building   = "Land_A_Castle_Gate";
_ressource1 = ["ItemStone",6];
_ressource2 = ["MortarBucket",1];
_ressource3 = ["equip_brick",5];

_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [_ressource1] call player_checkItems;
_hasitems2 = [_ressource2] call player_checkItems;
_hasitems3 = [_ressource3] call player_checkItems;

if (call {_hastools} && {_hasitems1} && {_hasitems2} && {_hasitems3}) then {

    [
        _building,
	    [
	        _ressource1,
	        _ressource2,
			_ressource3
	    ],
		[0,20,8.5]
    ] call stormz_build;
};
