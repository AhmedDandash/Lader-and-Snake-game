#include "Input.h"
#include "Output.h"

//This is a test code to test the Input and Output classes

int main()
{
	int x, y;

	//Create Input and Output objects to test
	Output* pOut = new Output();
	Input* pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test classes of phase 1, Click anywhere to start the test");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 0:	
	//			Create The FULL Tool bar of Design Mode, the grid area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar, Grid and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	
	//			Testing the Output Class
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST2: Testing the [ Output ] class, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	/// 2.1- Drawing Cells with Cards Test ///
	/// ===================================
	pOut->PrintMessage("2.1- Drawing (Cells with CARDS) Test,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	CellPosition card_1(0, 0);  // assume card number is : 1
	CellPosition card_2(0, 10); // assume card number is : 2
	CellPosition card_3(8, 0);  // assume card number is : 3
	CellPosition card_4(8, 10); // assume card number is : 4
	CellPosition card_10(4, 5); // assume card number is : 10


	///TODO: Call Function DrawCell of Class Ouput Multiple Times
	///       to draw cells in cell locations of: card_1, card_2, ..., card_10 declared above
	///       with cardNum 1, 2, 3, 4 and 10 respectively

	pOut->DrawCell(card_1, 1);
	pOut->DrawCell(card_2, 2);
	pOut->DrawCell(card_3, 3);
	pOut->DrawCell(card_4, 4);
	pOut->DrawCell(card_10, 10);


	pOut->PrintMessage("FINISHED - Drawing (Cells with CARDS) Test,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	/// 2.2- Drawing Players Test ///
	/// ==============================
	pOut->PrintMessage("2.2- Drawing (Players) Test,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	CellPosition player_1(8, 0);
	CellPosition player_15(2, 18);
	CellPosition player_99(2, 5);


	///TODO: Call Function DrawPlayer of Class Ouput Multiple Times
	///       to draw the following players:
	///       playerNum (0) with color (PlayerColors[0] defined in UI object) in cell position (player_1 declared above) 
	///       playerNum (1) with color (PlayerColors[1] defined in UI object) in cell position (player_1 declared above) 
	///       playerNum (2) with color (PlayerColors[2] defined in UI object) in cell position (player_1 declared above) 
	///       playerNum (3) with color (PlayerColors[3] defined in UI object) in cell position (player_1 declared above) 
	/// 
	///       playerNum (0) with color (PlayerColors[0] defined in UI object) in cell position (player_15 declared above) --> Invalid
	/// 
	///       playerNum (1) with color (PlayerColors[1] defined in UI object) in cell position (player_99 declared above) 
	///       playerNum (5) with color (PlayerColors[1] defined in UI object) in cell position (player_99 declared above) --> Invalid
	///       playerNum (-1) with color (PlayerColors[1] defined in UI object) in cell position (player_99 declared above) --> Invalid

	pOut->DrawPlayer(player_1, 0, UI.PlayerColors[0]);
	pOut->DrawPlayer(player_1, 1, UI.PlayerColors[1]);
	pOut->DrawPlayer(player_1, 2, UI.PlayerColors[2]);
	pOut->DrawPlayer(player_1, 3, UI.PlayerColors[3]);

	pOut->DrawPlayer(player_15, 0, UI.PlayerColors[0]);

	pOut->DrawPlayer(player_99, 1, UI.PlayerColors[1]);
	pOut->DrawPlayer(player_99, 5, UI.PlayerColors[1]);
	pOut->DrawPlayer(player_99, -1, UI.PlayerColors[1]);



	pOut->PrintMessage("FINISHED - Drawing (Players) Test,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	/// 2.3- Drawing Ladders ///
	/// ====================
	pOut->PrintMessage("2.3- Drawing (Ladders) Test,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	CellPosition start_89(0, 0);
	CellPosition end_34(5, 0);

	CellPosition start_22(7, 10);
	CellPosition end_99(0, 10);

	///TODO: Call Function DrawLadder of Class Ouput Multiple Times
	///       to draw the following ladders:
	///       a ladder from start_89 to end_34 declared above --> INVALID because toCell is below
	///       a ladder from start_22 to end_99 declared above --> valid
	///       a ladder from start_89 to end_99 declared above --> INVALID because NOT vertical
	///       a ladder from end_34 to start_89 declared above --> valid


	pOut->DrawLadder(start_89, end_34);
	pOut->DrawLadder(start_22, end_99);
	pOut->DrawLadder(start_89, end_99);
	pOut->DrawLadder(end_34, start_89);


	pOut->PrintMessage("FINISHED - Drawing (Ladders) Test,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	/// 2.4- Drawing Snakes ///
	/// ====================
	pOut->PrintMessage("2.4- Drawing (Snakes) Test,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	CellPosition start_24(6, 1);
	CellPosition end_2(8, 1);

	CellPosition start_98(0, 9);
	CellPosition end_32(6, 9);

	///TODO: Call Function DrawSnake of Class Ouput Multiple Times
	///       to draw the following snakes:
	///       a snake from start_24 to end_2 declared above
	///       a snake from start_98 to end_32 declared above
	///       a snake from start_98 to end_2 declared above (invalid)
	///       a snake from end_2 to start_24 declared above (invalid)


	pOut->DrawSnake(start_24, end_2);
	pOut->DrawSnake(start_98, end_32);
	pOut->DrawSnake(start_98, end_2);
	pOut->DrawSnake(end_2, start_24);


	pOut->PrintMessage("FINISHED - Drawing (Snakes) Test,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: 
	//			Input Class - Part 1
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST3: Now Time to test class [ Input ], Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	/// 3.1- Getting Integer ///
	/// ===========================
	pOut->PrintMessage("3.1- (GetInteger) Test, Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///TODO: Add code here to 
	// 1- Call GetInteger Function and receive its returned integer
	// 2- Print it in the status bar in this format:   You Entered: 116
	//    (assuming the entered number is 116)
	// 3- Call GetPointClicked() function

	int returnedInt;
	returnedInt = pIn->GetInteger(pOut);
	std::string s = std::to_string(returnedInt);

	pOut->PrintMessage("You Entered: " + s);
	pIn->GetPointClicked(x, y);	//Wait for any click



	pOut->PrintMessage("FINISHED - (GetInteger) Test, Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	/// 3.2- Getting Cell Clicked ///
	/// =========================
	pOut->PrintMessage("3.2- (GetCellClicked) Test, Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///TODO: Add code here to 
	// 1- Call function GetCellClicked
	// 2- Print on the status bar the vCell and hCell of the clicked cell
	// 3- Repeat Step 1 and 2 five times
	

	for (int i = 0; i < 5; i++)
	{
		CellPosition p1;

		p1 = pIn->GetCellClicked();
		int v1 = p1.VCell();
		std::string testv = std::to_string(v1);
		int h1 = p1.HCell();
		std::string testh = std::to_string(h1);

		pOut->PrintMessage("(" + testv + " , " + testh + ")");
	}

	pIn->GetPointClicked(x, y);	//Wait for any click

	pOut->PrintMessage("FINISHED - (GetCellClicked) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	

	/// 3.3- Reading a String ///
	/// =====================
	pOut->PrintMessage("3.3- (GetSrting) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///TODO: Add code here to 
	// 1- Read a string from the user on the status bar
	// 2- After reading the string clear the status bar
	// 3- print on the status bar "You Entered" then print the string
	// NOTE: GetString() is already implemented. It is just required from you to call it

	std::string l = pIn->GetSrting(pOut);
	pOut->ClearStatusBar();

	pOut->PrintMessage("You Entered: " + l);
	pIn->GetPointClicked(x, y);	//Wait for any click

	pOut->PrintMessage("FINISHED - (GetSrting) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4:	
	//			Test the functions of CellPosition Class
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST4: Testing the [ CellPosition ] class, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	pOut->PrintMessage("4.1- (Setters with Validation) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	CellPosition cellpos_1(0, 0);

	///TODO:
	// 1- Ask user to enter an integer and read it using GetInteger()
	// 2- Call SetVCell() of cellpos_1 with that integer
	// 3- Print GetVCell() of cellpos_1 as follows: "Now the vCell = 5" (assuming the entered integer is 5)
	// 4- Call GetPointClicked()
	// 5- Repeat the above steps FIVE TIMES
	// 6- Repeat all the above steps to test SetHCell() function instead with the needed modifications

	for(int i = 0; i < 5; i++)
	{
		int vc1 = pIn->GetInteger(pOut);
		cellpos_1.SetVCell(vc1);
		int getvc1 = cellpos_1.VCell();

		std::string cellv_1 = std::to_string(getvc1);
		pOut->PrintMessage("Now the vCell = " + cellv_1);
		pIn->GetPointClicked(x, y);

		///////////////////////////////////////////////////////////////

		int hc1 = pIn->GetInteger(pOut);
		cellpos_1.SetHCell(hc1);
		int gethc1 = cellpos_1.HCell();

		std::string cellh_1 = std::to_string(gethc1);
		pOut->PrintMessage("Now the hCell = " + cellh_1);
		pIn->GetPointClicked(x, y);
	}
	///////////////////////////////////////////////
	pOut->PrintMessage("FINISHED - (Setters with Validation) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	pOut->PrintMessage("4.2- (GetCellNumFromPosition) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	/// TODO:
	// 1- Read from user two integers representing vCell and hCell
	// 2- Creates a CellPosition object of them
	// 3- Use the function GetCellNum() to get the corresponding Cell Number (it used function : GetCellNumFromPosition() inside it)
	// 4- Print the Cell Number on the status bar
	// 5- Repeat the above steps Five TIMES
	////////////////////////////////////////////////////
	

	for (int i = 0; i < 5; i++) 
	{
		CellPosition ctest;

		int vcell1 = pIn->GetInteger(pOut);
		ctest.SetVCell(vcell1);
		//pIn->GetPointClicked(x, y);
		int hcell1 = pIn->GetInteger(pOut);
		ctest.SetHCell(hcell1);

		int cellnum1 = ctest.GetCellNumFromPosition(ctest);
		
		if (cellnum1 != 0)
		{
			std::string cellnum1_s = std::to_string(cellnum1);
			pOut->PrintMessage("cellNum =  " + cellnum1_s);
			pIn->GetPointClicked(x, y);
		}
		else
		{
			pOut->PrintMessage("Position input is incorrect");
			pIn->GetPointClicked(x, y);
		}
	}

	pIn->GetPointClicked(x, y);	//Wait for any click
	////////////////////////////////////////////////////

	pOut->PrintMessage("FINISHED - (GetCellNumFromPosition) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	pOut->PrintMessage("4.3- (GetCellPositionFromNum) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	/// TODO:
	// 1- Read from user one integer representing cellNum
	// 2- Creates a CellPosition object of that integer using that constructor: CellPosition (int cellNum);
	//   --> it uses the function : GetCellPositionFromNum () inside it
	// 4- Print the Cell vCell and hCell on the status bar
	// 5- Repeat the above steps Five TIMES

	for (int i = 0; i < 5; i++)
	{
		CellPosition cellnum_test;

		int cellnum1 = pIn->GetInteger(pOut);
		cellnum_test = cellnum_test.GetCellPositionFromNum(cellnum1);
		int vcellnum = cellnum_test.VCell();
		int hcellnum = cellnum_test.HCell();

		std::string vcellnum_s = std::to_string(vcellnum);
		std::string hcellnum_s = std::to_string(hcellnum);
		pOut->PrintMessage("vCell =  " + vcellnum_s + ", hCell = " + hcellnum_s);
		pIn->GetPointClicked(x, y);
	}
 ////////////////////////////////////////////////////////////
	pOut->PrintMessage("FINISHED - (GetCellPositionFromNum) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 5: 
	//			Input Class - Part2: Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST5: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;

	///TODO:  
	//You must add a case for EACH action (both Create-Grid mode and Game mode actions)  <------ meaning??
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case ADD_LADDER:
			pOut->PrintMessage("Action: ADD_LADDER , Click anywhere");
			break;

		case ADD_SNAKE:
			pOut->PrintMessage("Action: ADD_SNAKE , Click anywhere");
			break;

		case ADD_CARD:
			pOut->PrintMessage("Action: ADD_CARD , Click anywhere");
			break;

		case EXIT:				
			break;

		case SWITCH_TO_PLAY_MODE:
			pOut->PrintMessage("Action: TO_PLAY_MODE , Click anywhere");
			pOut->CreatePlayModeToolBar();
			pOut->PrintPlayersInfo("P0(100, 0), P1(100,0), P2(100,0), P3(100,0) | Curr = 0");

			///TODO:  Call Function (PrintPlayersInfo) of Class Output with a string similar to 
			//        the one given in the screenshot of project document 

			break;

			///TODO:  ADD Cases similarly for ALL the remaining actions of DESIGN Mode

		case COPY_CARD:
			pOut->PrintMessage("Action: COPY_CARD , Click anywhere");
			break;

		case CUT_CARD:
			pOut->PrintMessage("Action: CUT_CARD , Click anywhere");
			break;

		case PASTE_CARD:
			pOut->PrintMessage("Action: PASTE_CARD , Click anywhere");
			break;

		case DELETE_GAME_OBJECTS:
			pOut->PrintMessage("Action: DELETE_GAME_OBJECT , Click anywhere");
			break;

		case SAVE_GRID:
			pOut->PrintMessage("Action: SAVE_GRID , Click anywhere");
			break;

		case OPEN_GRID:
			pOut->PrintMessage("Action: OPEN_GRID , Click anywhere");
			break;


			///////////////////////////////////////////////////
		case ROLL_DICE:
			pOut->PrintMessage("Action: ROLL_DICE , Click anywhere");
			break;

		case SWITCH_TO_DESIGN_MODE:
			pOut->PrintMessage("Action: TO_DESIGN_MODE , Click anywhere");
			pOut->CreateDesignModeToolBar();
			break;

			///TODO:  ADD Cases similarly for ALL the remaining actions of PLAY Mode

		case INPUT_DICE_VALUE:
			pOut->PrintMessage("Action: INPUT_DICE_VALUE , Click anywhere");
			break;

		case NEW_GAME:
			pOut->PrintMessage("Action: NEW_GAME , Click anywhere");
			break;

		}
	}while(ActType != EXIT);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x,y);


	delete pIn;
	delete pOut;	
	return 0;
}


