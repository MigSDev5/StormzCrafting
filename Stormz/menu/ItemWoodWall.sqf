private ["_hastools","_hasitems1","_hasitems2","_remove"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemWoodWallThird",3]] call player_checkItems;



if (call {_hastools} && {_hasitems1}) then {
//_remove = [["ItemWoodWallThird",3]] call player_removeItems;

player removeMagazine "ItemWoodWallThird";
sleep 0.1;
player removeMagazine "ItemWoodWallThird";
sleep 0.1;
player removeMagazine "ItemWoodWallThird";
sleep 1.8;

player addMagazine "ItemWoodWall";

createDialog "STORMZ_CRAFT_MENU";
};
