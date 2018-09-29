private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["PartPlywoodPack",1]] call player_checkItems;
_hasitems2 = [["PartPlywoodPack",1]] call player_checkItems;
_hasitems3 = [["PartPlywoodPack",1]] call player_checkItems;


if (call {_hastools} && {_hasitems1} && {_hasitems2} && {_hasitems3}) then {

player removeMagazine "PartPlywoodPack";
sleep 0.1;
player removeMagazine "PartPlywoodPack";
sleep 0.1;
player removeMagazine "PartPlywoodPack";
sleep 0.1;
player removeMagazine "PartPlywoodPack";
sleep 0.1;
player removeMagazine "PartPlywoodPack";
sleep 1;
player addMagazine "ItemWoodWallThird";
createDialog "STORMZ_CRAFT_MENU";
 
};
