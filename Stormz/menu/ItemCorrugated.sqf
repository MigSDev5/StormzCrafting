private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemPole",2]] call player_checkItems;
_hasitems2 = [["ItemTankTrap",2]] call player_checkItems;
_hasitems3 = [["PartWoodLumber",2]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2} && {_hasitems3}) then {
player removeMagazine "ItemPole";
sleep 0.1;
player removeMagazine "ItemPole";
sleep 0.1;
player removeMagazine "ItemTankTrap";
sleep 0.1;
player removeMagazine "ItemTankTrap";
sleep 0.1;
player removeMagazine "PartWoodLumber";
sleep 0.1;
player removeMagazine "PartWoodLumber";
sleep 1;
player addMagazine "ItemCorrugated";
createDialog "STORMZ_CRAFT_MENU";
 
};