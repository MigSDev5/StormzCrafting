private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["PartPlywoodPack",2]] call player_checkItems;
_hasitems2 = [["PartPlankPack",2]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2}) then {
player removeMagazine "PartPlywoodPack";
sleep 0.1;
player removeMagazine "PartPlywoodPack";
sleep 0.1;
player removeMagazine "PartPlankPack";
sleep 0.1;
player removeMagazine "PartPlankPack";
sleep 1;
player addMagazine "ItemWoodFloorHalf";
createDialog "STORMZ_CRAFT_MENU";
 
};
