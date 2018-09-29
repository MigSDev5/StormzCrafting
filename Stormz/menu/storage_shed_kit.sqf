private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemCorrugated",4]] call player_checkItems;
_hasitems2 = [["PartWoodPlywood",2]] call player_checkItems;
_hasitems3 = [["PartWoodLumber",2]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2} && {_hasitems3}) then {
player removeMagazine "ItemCorrugated";
sleep 0.1;
player removeMagazine "ItemCorrugated";
sleep 0.1;
player removeMagazine "ItemCorrugated";
sleep 0.1;
player removeMagazine "ItemCorrugated";
sleep 0.1;
player removeMagazine "PartWoodPlywood";
sleep 0.1;
player removeMagazine "PartWoodPlywood";
sleep 0.1;
player removeMagazine "PartWoodLumber";
sleep 0.1;
player removeMagazine "PartWoodLumber";
sleep 1;
player addMagazine "storage_shed_kit";
createDialog "STORMZ_CRAFT_MENU";
 
};