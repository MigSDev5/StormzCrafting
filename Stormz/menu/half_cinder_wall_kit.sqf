private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["CinderBlocks",3]] call player_checkItems;
_hasitems2 = [["MortarBucket",1]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2}) then {
_remove = [["CinderBlocks",3]] call player_removeItems;
_remove = [["MortarBucket",1]] call player_removeItems;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "MortarBucket";
sleep 1;
player addMagazine "half_cinder_wall_kit";
createDialog "STORMZ_CRAFT_MENU";
 
};
