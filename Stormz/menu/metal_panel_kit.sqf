private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemPole",4]] call player_checkItems;
_hasitems2 = [["ItemTankTrap",4]] call player_checkItems;

if (call {_hastools} && {_hasitems1} && {_hasitems2}) then {
player removeMagazine "ItemPole";
sleep 0.1;
player removeMagazine "ItemPole";
sleep 0.1;
player removeMagazine "ItemPole";
sleep 0.1;
player removeMagazine "ItemPole";
sleep 0.1;
player removeMagazine "ItemTankTrap";
sleep 0.1;
player removeMagazine "ItemTankTrap";
sleep 0.1;
player removeMagazine "ItemTankTrap";
sleep 0.1;
player removeMagazine "ItemTankTrap";

sleep 1;
player addMagazine "metal_panel_kit";
createDialog "STORMZ_CRAFT_MENU";
 
};