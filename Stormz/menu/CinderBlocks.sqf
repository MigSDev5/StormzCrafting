private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemSandbag",3]] call player_checkItems;
_hasitems2 = [["MortarBucket",1]] call player_checkItems;
_hasitems3 = [["ItemWaterBottle",1]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2} && {_hasitems3}) then {
player removeMagazine "ItemSandbag";
sleep 0.1;
player removeMagazine "ItemSandbag";
sleep 0.1;
player removeMagazine "ItemSandbag";
sleep 0.1;
player removeMagazine "MortarBucket";
sleep 0.1;
player removeMagazine "ItemWaterBottle";
sleep 1;
player addMagazine = [["CinderBlocks",2]];
createDialog "STORMZ_CRAFT_MENU";
 
};
