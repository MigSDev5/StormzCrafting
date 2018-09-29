private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemWoodWallLg",1]] call player_checkItems;
_hasitems2 = [["PartWoodLumber",2]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2}) then {

player removeMagazine "ItemWoodWallLg";
sleep 0.1;
player removeMagazine "PartWoodLumber";
sleep 0.1;
player removeMagazine "PartWoodLumber";
sleep 1;
player addMagazine "ItemWoodWallGarageDoor";
createDialog "STORMZ_CRAFT_MENU";
 
};
