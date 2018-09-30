private ["_hastools","_hasitems1","_hasitems2","_building","_ressource1","_ressource2"];

_building   = "Land_SS_hangar";
_ressource1 = ["equip_metal_sheet",3];
_ressource2 = ["equip_metal_sheet_rusted",4];

_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [_ressource1] call player_checkItems;
_hasitems2 = [_ressource2] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2}) then {

    [
        _building,
	    [
	        _ressource1,
	        _ressource2
	    ],
		[0,35,6]
    ] call stormz_build;
};
