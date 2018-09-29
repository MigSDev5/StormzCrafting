private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["PartGlass",1]] call player_checkItems;
_hasitems2 = [["ItemWoodWall",1]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2}) then {
player removeMagazine "ItemWoodWall";
sleep 0.1;
player removeMagazine "PartGlass";
sleep 1;
player addMagazine "ItemWoodWallWindow";
createDialog "STORMZ_CRAFT_MENU";
 
};
