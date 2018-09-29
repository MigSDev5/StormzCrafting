private ["_hastools","_hasitems1","_hasitems2"];
_hastools = ["ItemToolbox"] call player_hasTools;
_hasitems1 = [["metal_panel_kit",4]] call player_checkItems;

if (call {_hastools} && {_hasitems1} && {_hasitems2}) then {
player removeMagazine "metal_panel_kit";
sleep 0.1;
player removeMagazine "metal_panel_kit";
sleep 0.1;
player removeMagazine "metal_panel_kit";
sleep 0.1;
player removeMagazine "metal_panel_kit";


sleep 1;
player addMagazine "metal_floor_kit";
createDialog "STORMZ_CRAFT_MENU";
 
};