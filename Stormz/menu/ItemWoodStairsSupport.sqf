private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemWoodStairs",1]] call player_checkItems;
_hasitems2 = [["PartWoodLumber",1]] call player_checkItems;



if (call {_hastools} && {_hasitems1} && {_hasitems2}) then {
player removeMagazine "PartWoodLumber";
sleep 0.1;
player removeMagazine "ItemWoodStairs";
sleep 1;
player addMagazine "ItemWoodStairsSupport";
createDialog "STORMZ_CRAFT_MENU";
 
};