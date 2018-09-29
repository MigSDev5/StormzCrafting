private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["CinderBlocks",3]] call player_checkItems;
_hasitems2 = [["MortarBucket",1]] call player_checkItems;
_hasitems3 = [["ItemTankTrap",1]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2} && {_hasitems3}) then {
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "MortarBucket";
sleep 0.1;
player removeMagazine "ItemTankTrap";
sleep 1;
player addMagazine "cinder_garage_kit";
createDialog "STORMZ_CRAFT_MENU";
 
};
