#ifndef UI_INFO_H
#define UI_INFO_H

#include "..\CMUgraphicsLib\CMUgraphics.h"

//User Interface information file.
//This file contains info that is needed by Input and Output classes to
//handle the user interface

enum GUI_MODE	//Graphical user interface mode
{
	MODE_DRAW,	//Drawing mode (startup mode)
	MODE_PLAY	//Playing mode
};

enum DrawMenuItem //The items of the Draw menu (you should add more items)
{
	//Note: Items are **(ordered)** here as they appear in menu
	//If you want to change the menu items order, change the order here
	ITM_RECT,		//Recangle item in menu

	//TODO: Add more items names here
	ITM_SQUARE,
	ITM_CIRCLE,
	ITM_TRIANGLE,
	ITM_HEXAGON,

	ITM_SELECT,
	ITM_CHANGE_BORDER_COLOR,
	ITM_CHANGE_FILLING_COLOR,
	ITM_DELETE_FIG,
	ITM_CLEAR_ALL,
	ITM_COPY_FIG,
	ITM_CUT_FIG,
	ITM_PASTE_FIG,
	ITM_SEND_TO_BACK,
	ITM_SAVE_GRAPH,
	ITM_LOAD_GRAPH,
	ITM_TO_PLAY,
	ITM_EXIT,		//Exit item
	
	DRAW_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
	
};

enum PlayMenuItem //The items of the Play menu (you should add more items)
{
	//Note: Items are **(ordered)** here as they appear in menu
	//If you want to change the menu items order, change the order here
	
	//TODO: Add more items names here
	ITM_PICK_HIDE_TYPE,
	ITM_PICK_HIDE_COLOR,
	ITM_PICK_HIDE_TYPE_COLOR,
	ITM_TO_DRAW,


	PLAY_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
	
};


__declspec(selectany) //This line to prevent "redefinition error"

struct UI_Info	//User Interface Info.
{
	GUI_MODE InterfaceMode;
	
	int	width, height,	    //Window width and height
		wx , wy,			//Window starting coordinates
		StatusBarHeight,	//Status Bar Height
		ToolBarHeight,		//Tool Bar Height (distance from top of window to bottom line of toolbar)
		LineUnderTBWidth,	//line Under the Toolbar Pen Width
		MenuItemWidth;		//Width of each item in toolbar menu
	

	color DrawColor;		//Drawing color
	color FillColor;		//Filling color
	color HighlightColor;	//Highlighting color
	color MsgColor;			//Messages color
	color BkGrndColor;		//Background color
	color StatusBarColor;	//Status bar color
	int PenWidth;			//width of the pen that draws shapes

	/// Add more members if needed
	
}UI;	//create a global object UI

#endif