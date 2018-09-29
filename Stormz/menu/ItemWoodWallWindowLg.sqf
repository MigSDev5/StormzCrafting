private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemWoodWallWindow",1]] call player_checkItems;
_hasitems2 = [["PartWoodPlywood",1]] call player_checkItems;
_hasitems3 = [["PartWoodLumber",1]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2} && {_hasitems3}) then {
player removeMagazine "ItemWoodWallWindow";
sleep 0.1;
player removeMagazine "PartWoodPlywood";
sleep 0.1;
player removeMagazine "PartWoodLumber";
sleep 1;
player addMagazine "ItemWoodWallWindowLg";
createDialog "STORMZ_CRAFT_MENU";
 
};
