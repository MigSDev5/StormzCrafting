private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemWoodFloorHalf",2]] call player_checkItems;



if (call {_hastools} && {_hasitems1}) then {
player removeMagazine "ItemWoodFloorHalf";
sleep 0.1;
player removeMagazine "ItemWoodFloorHalf";
sleep 1;
player addMagazine "ItemWoodFloor";
createDialog "STORMZ_CRAFT_MENU";
 
};
