/* createDialog "56446"; */
class STORMZ_CRAFT_MENU
{
    idd = 56446;
    movingenable=false;
	
	class Controls
	{ 	
class STORMZ_MENU_FRAME: STORMZ_RscFrame
{
	idc = 1800;
	x = 0.230453 * safezoneW + safezoneX;
	y = 0.155276 * safezoneH + safezoneY;
	w = 0.534989 * safezoneW;
	h = 0.618545 * safezoneH;
	colorBackground[] = {0,0,0,0.6};
};
class STORMZ_MENU_GUIBack: STORMZ_GUIBack
{
	idc = 1800;
	x = 0.230453 * safezoneW + safezoneX;
	y = 0.155276 * safezoneH + safezoneY;
	w = 0.534989 * safezoneW;
	h = 0.618545 * safezoneH;
	colorBackground[] = {0,0,0,0.6};
};
class STORMZ_MENU_TITLE: STORMZ_TITLE_RscText
{
	idc = 1000;
	text = "STORMZ WORK SHOP";
	x = 0.441193 * safezoneW + safezoneX;
	y = 0.161043 * safezoneH + safezoneY;
	w = 0.155359 * safezoneW;
	h = 0.0549818 * safezoneH;
	colorText[] = {1,1,1,1};
};
class STORMZ_MENU_LABLE_WOOD: STORMZ_RscText
{
	idc = 1001;
	text = "CRAFT WOOD ITEMS";
	x = 0.288346 * safezoneW + safezoneX;
	y = 0.223775 * safezoneH + safezoneY;
	w = 0.0966848 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
};
class STORMZ_MENU_LABLE_METAL: STORMZ_RscText
{
	idc = 1002;
	text = "CRAFT CINDER ITEMS";
	x = 0.452536 * safezoneW + safezoneX;
	y = 0.222765 * safezoneH + safezoneY;
	w = 0.0966848 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
};
class STORMZ_MENU_LABLE_CINDER: STORMZ_RscText
{
	idc = 1003;
	text = "CRAFT METAL ITEMS";
	x = 0.611947 * safezoneW + safezoneX;
	y = 0.223774 * safezoneH + safezoneY;
	w = 0.0966848 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
};
class STORMZ_MENU_divider01: STORMZ_RscText
{
	idc = 1004;
	x = 0.418502 * safezoneW + safezoneX;
	y = 0.251095 * safezoneH + safezoneY;
	w = 0.00644566 * safezoneW;
	h = 0.494836 * safezoneH;
	colorBackground[] = {0,0,1,1};
};
class STORMZ_MENU_divider03: STORMZ_RscText
{
	idc = 1007;
	x = 0.577318 * safezoneW + safezoneX;
	y = 0.250083 * safezoneH + safezoneY;
	w = 0.00412522 * safezoneW;
	h = 0.247418 * safezoneH;
	colorBackground[] = {0,0,1,1};
};
class STORMZ_MENU_divider02: STORMZ_RscText
{
	idc = 1005;
	x = 0.259689 * safezoneW + safezoneX;
	y = 0.250083 * safezoneH + safezoneY;
	w = 0.476978 * safezoneW;
	h = 0.0137454 * safezoneH;
	colorBackground[] = {0,0,1,1};
};
class STORMZ_MENU_divider04: STORMZ_RscText
{
	idc = 1006;
	x = 0.259688 * safezoneW + safezoneX;
	y = 0.25413 * safezoneH + safezoneY;
	w = 0.00644566 * safezoneW;
	h = 0.494836 * safezoneH;
	colorBackground[] = {0,0,1,1};
};
class STORMZ_MENU_divider05: STORMZ_RscText
{
	idc = 1008;
	x = 0.730162 * safezoneW + safezoneX;
	y = 0.25413 * safezoneH + safezoneY;
	w = 0.00644566 * safezoneW;
	h = 0.481091 * safezoneH;
	colorBackground[] = {0,0,1,1};
};
class STORMZ_MENU_divider06: STORMZ_RscText
{
	idc = 1009;
	x = 0.261511 * safezoneW + safezoneX;
	y = 0.733673 * safezoneH + safezoneY;
	w = 0.476978 * safezoneW;
	h = 0.0137454 * safezoneH;
	colorBackground[] = {0,0,1,1};
};
class STORMZ_RscText_1010: STORMZ_RscText
{
	idc = 1010;
	x = 0.421488 * safezoneW + safezoneX;
	y = 0.482799 * safezoneH + safezoneY;
	w = 0.309391 * safezoneW;
	h = 0.0137454 * safezoneH;
	colorBackground[] = {0,0,1,1};
};
class STORMZ_MENU_LABLE_MISC: STORMZ_RscText
{
	idc = 1011;
	text = "CRAFT MISC ITEMS";
	x = 0.425071 * safezoneW + safezoneX;
	y = 0.496965 * safezoneH + safezoneY;
	w = 0.0966848 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
};
class STORMZ_MENU_CLOSE: STORMZ_RscButton
{
	idc = 1600;
	text = "CLOSE MENU";
	x = 0.235728 * safezoneW + safezoneX;
	y = 0.170109 * safezoneH + safezoneY;
	w = 0.0644566 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\close.sqf'";
};
class STORMZ_MENU_BUTTON_01: STORMZ_RscButton
{

	idc = 1601;
	text = "1/3 Wood Wall";
	x = 0.275213 * safezoneW + safezoneX;
	y = 0.278414 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodWallThird.sqf';";
};
class STORMZ_MENU_BUTTON_02: STORMZ_RscButton
{
	idc = 1602;
	text = "Wood Wall";
	x = 0.275212 * safezoneW + safezoneX;
	y = 0.313826 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodWall.sqf';";
};
class STORMZ_MENU_BUTTON_03: STORMZ_RscButton
{
	idc = 1603;
	text = "Wood Wall Long";
	x = 0.275212 * safezoneW + safezoneX;
	y = 0.348227 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodWallLg.sqf';";
};
class STORMZ_MENU_BUTTON_05: STORMZ_RscButton
{
	idc = 1604;
	text = "Wood Wall Window Long";
	x = 0.275212 * safezoneW + safezoneX;
	y = 0.418042 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodWallWindowLg.sqf';";
};
class STORMZ_MENU_BUTTON_04: STORMZ_RscButton
{
	idc = 1605;
	text = "Wood Wall Window";
	x = 0.275211 * safezoneW + safezoneX;
	y = 0.383641 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodWallWindow.sqf';";
};
class STORMZ_MENU_BUTTON_06: STORMZ_RscButton
{
	idc = 1606;
	text = "Wood Wall Door";
	x = 0.275212 * safezoneW + safezoneX;
	y = 0.452445 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodWallWithDoor.sqf';";
};
class STORMZ_MENU_BUTTON_07: STORMZ_RscButton
{
	idc = 1607;
	text = "Wood Wall Door Long";
	x = 0.274615 * safezoneW + safezoneX;
	y = 0.487858 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodWallWithDoorLg.sqf';";
};
class STORMZ_MENU_BUTTON_08: STORMZ_RscButton
{
	idc = 1608;
	text = "1/4 Wood Floor";
	x = 0.275212 * safezoneW + safezoneX;
	y = 0.52226 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodFloorQuarter.sqf';";
};
class STORMZ_MENU_BUTTON_09: STORMZ_RscButton
{
	idc = 1609;
	text = "1/2 Wood Floor";
	x = 0.275212 * safezoneW + safezoneX;
	y = 0.557673 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodFloorHalf.sqf';";
};
class STORMZ_MENU_BUTTON_10: STORMZ_RscButton
{
	idc = 1610;
	text = "Wood Garage Door";
	x = 0.275212 * safezoneW + safezoneX;
	y = 0.593088 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodWallGarageDoor.sqf';";
};
class STORMZ_MENU_BUTTON_11: STORMZ_RscButton
{
	idc = 1611;
	text = "Wood Ladder";
	x = 0.275212 * safezoneW + safezoneX;
	y = 0.628501 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodLadder.sqf';";
};
class STORMZ_MENU_BUTTON_12: STORMZ_RscButton
{
	idc = 1612;
	text = "Wood Stairs";
	x = 0.275212 * safezoneW + safezoneX;
	y = 0.66189 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodStairs.sqf';";
};
class STORMZ_MENU_BUTTON_13: STORMZ_RscButton
{
	idc = 1613;
	text = "Wood Floor";
	x = 0.275808 * safezoneW + safezoneX;
	y = 0.696291 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemWoodFloor.sqf';";
};
class STORMZ_MENU_BUTTON_14: STORMZ_RscButton
{
	idc = 1614;
	text = "Cinder Blocks";
	x = 0.436414 * safezoneW + safezoneX;
	y = 0.278413 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\CinderBlocks.sqf';";
};
class STORMZ_MENU_BUTTON_15: STORMZ_RscButton
{
	idc = 1615;
	text = "1/2 Cinder Wall";
	x = 0.436414 * safezoneW + safezoneX;
	y = 0.312816 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\half_cinder_wall_kit.sqf';";
};
class STORMZ_MENU_BUTTON_16: STORMZ_RscButton
{
	idc = 1616;
	text = "Cinder Full Wall";
	x = 0.436415 * safezoneW + safezoneX;
	y = 0.346205 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\fall_cinder_wall_kit.sqf';";
};
class STORMZ_MENU_BUTTON_17: STORMZ_RscButton
{
	idc = 1617;
	text = "Cinder Door Way";
	x = 0.436414 * safezoneW + safezoneX;
	y = 0.380606 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\cinder_door_way.sqf';";
};
class STORMZ_MENU_BUTTON_18: STORMZ_RscButton
{
	idc = 1618;
	text = "Cinder Garage Door Way";
	x = 0.43614 * safezoneW + safezoneX;
	y = 0.419971 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\cinder_garage_kit.sqf';";
};
class STORMZ_MENU_BUTTON_19: STORMZ_RscButton
{
	idc = 1619;
	text = "Metal Panel";
	x = 0.591646 * safezoneW + safezoneX;
	y = 0.280437 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\metal_panel_kit.sqf';";
};
class STORMZ_MENU_BUTTON_20: STORMZ_RscButton
{
	idc = 1620;
	text = "Metal Floor";
	x = 0.591647 * safezoneW + safezoneX;
	y = 0.313827 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\metal_floor_kit.sqf';";
};
class STORMZ_MENU_BUTTON_21: STORMZ_RscButton
{
	idc = 1621;
	text = "Storage Shed";
	x = 0.591647 * safezoneW + safezoneX;
	y = 0.347216 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\storage_shed_kit.sqf';";
};
class STORMZ_MENU_BUTTON_22: STORMZ_RscButton
{
	idc = 1622;
	text = "Tank Trap";
	x = 0.591647 * safezoneW + safezoneX;
	y = 0.381618 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemTankTrap.sqf';";
};
class STORMZ_MENU_BUTTON_23: STORMZ_RscButton
{
	idc = 1623;
	text = "Corrugated Fence";
	x = 0.592244 * safezoneW + safezoneX;
	y = 0.41602 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\ItemCorrugated.sqf';";
};
class STORMZ_MENU_BUTTON_24: STORMZ_RscButton
{
	idc = 1624;
	text = "Metal Gate";
	x = 0.591647 * safezoneW + safezoneX;
	y = 0.450421 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\rusty_gate_kit.sqf';";
};
class STORMZ_MENU_BUTTON_25: STORMZ_RscButton
{
	idc = 1625;
	text = "C4";
	x = 0.434027 * safezoneW + safezoneX;
	y = 0.528331 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\blank.sqf';";
};
class STORMZ_MENU_BUTTON_26: STORMZ_RscButton
{
	idc = 1626;
	text = "RPG";
	x = 0.434027 * safezoneW + safezoneX;
	y = 0.563743 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\blank.sqf';";
};
class STORMZ_MENU_BUTTON_27: STORMZ_RscButton
{
	idc = 1627;
	text = "RPG Round";
	x = 0.43343 * safezoneW + safezoneX;
	y = 0.597134 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\blank.sqf';";
};
class STORMZ_MENU_BUTTON_28: STORMZ_RscButton
{
	idc = 1628;
	text = "Pipe Bomb";
	x = 0.43343 * safezoneW + safezoneX;
	y = 0.631535 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\blank.sqf';";
};
class STORMZ_MENU_BUTTON_29: STORMZ_RscButton
{
	idc = 1629;
	text = "IED 4";
	x = 0.432832 * safezoneW + safezoneX;
	y = 0.664926 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\blank.sqf';";
};
class STORMZ_MENU_BUTTON_30: STORMZ_RscButton
{
	idc = 1630;
	text = "IED 2";
	x = 0.432832 * safezoneW + safezoneX;
	y = 0.698315 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\blank.sqf';";
};
/* Coming Soon Buttons */
class STORMZ_MENU_BUTTON_31: STORMZ_RscButton
{
	idc = 1631;
	text = "Mozzi";
	x = 0.577914 * safezoneW + safezoneX;
	y = 0.52833 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\mozzi.sqf';";
};
class STORMZ_MENU_BUTTON_32: STORMZ_RscButton
{
	idc = 1632;
	text = "SS hangar";
	x = 0.578511 * safezoneW + safezoneX;
	y = 0.565766 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\SS_hangar.sqf';";
};
class STORMZ_MENU_BUTTON_33: STORMZ_RscButton
{
	idc = 1633;
	text = "Castle Bergfrit";
	x = 0.578511 * safezoneW + safezoneX;
	y = 0.599157 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\Castle_Bergfrit.sqf';";
};
class STORMZ_MENU_BUTTON_34: STORMZ_RscButton
{
	idc = 1634;
	text = "Castle Gate";
	x = 0.577914 * safezoneW + safezoneX;
	y = 0.632547 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\Castle_Gate.sqf';";
};
class STORMZ_MENU_BUTTON_35: STORMZ_RscButton
{
	idc = 1635;
	text = "Castle Wall";
	x = 0.577915 * safezoneW + safezoneX;
	y = 0.666949 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\Castle_Wall_20.sqf';";
};
class STORMZ_MENU_BUTTON_36: STORMZ_RscButton
{
	idc = 1636;
	text = "Atomic Bunker";
	x = 0.577318 * safezoneW + safezoneX;
	y = 0.700339 * safezoneH + safezoneY;
	w = 0.128913 * safezoneW;
	h = 0.0274909 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,1,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 56446);ExecVM 'Stormz\menu\bunker.sqf';";
};
};
};