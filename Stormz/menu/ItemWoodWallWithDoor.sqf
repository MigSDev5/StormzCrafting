private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemWoodWall",1]] call player_checkItems;
_hasitems2 = [["PartWoodLumber",1]] call player_checkItems;
_hasitems3 = [["PartWoodPlywood",1]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2} && {_hasitems3}) then {
player removeMagazine "ItemWoodWall";
sleep 0.1;
player removeMagazine "PartWoodLumber";
sleep 0.1;
player removeMagazine "PartWoodPlywood";
sleep 1;
player addMagazine "ItemWoodWallWithDoor";
createDialog "STORMZ_CRAFT_MENU";

};