private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemWoodWallLg",1]] call player_checkItems;
_hasitems2 = [["PartPlankPack",1]] call player_checkItems;
_hasitems3 = [["PartWoodPlywood",1]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2} && {_hasitems3}) then {
player removeMagazine "ItemWoodWallLg";
sleep 0.1;
player removeMagazine "PartPlankPack";
sleep 0.1;
player removeMagazine "PartWoodPlywood";
sleep 1;
player addMagazine "ItemWoodWallWithDoorLg";
createDialog "STORMZ_CRAFT_MENU";
 
};