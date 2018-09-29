private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["PartPlywoodPack",4]] call player_checkItems;

if (call {_hastools} && {_hasitems1}) then {
player removeMagazine "PartPlywoodPack";
sleep 0.1;
player removeMagazine "PartPlywoodPack";
sleep 0.1;
player removeMagazine "PartPlywoodPack";
sleep 0.1;
player removeMagazine "PartPlywoodPack";
sleep 1;
player addMagazine "ItemWoodLadder";
createDialog "STORMZ_CRAFT_MENU";
 
};