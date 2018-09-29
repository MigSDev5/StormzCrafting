private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["ItemPole",2]] call player_checkItems;


if (call {_hastools} && {_hasitems1}) then {
player removeMagazine "ItemPole";
sleep 0.1;
player removeMagazine "ItemPole";
sleep 1;
player addMagazine "ItemTankTrap";
createDialog "STORMZ_CRAFT_MENU";
 
};