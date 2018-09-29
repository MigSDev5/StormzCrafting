private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["CinderBlocks",7]] call player_checkItems;
_hasitems2 = [["MortarBucket",2]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2}) then {
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "CinderBlocks";
sleep 0.1;
player removeMagazine "MortarBucket";
sleep 0.1;
player removeMagazine "MortarBucket";
sleep 1;
player addMagazine "fall_cinder_wall_kit";
createDialog "STORMZ_CRAFT_MENU";
 
};
