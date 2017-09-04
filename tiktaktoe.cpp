/////////////////////////////////////////////////////////////////////
// 
// Name: Isai Maldonado
// Date: 4/18/17
// Class: CMPE 1370-04
// Semester: Spring 2017
// CSCI/CMPE 1370 Instructor: Gustavo G. Dietrich
//
// This program simulates a tic-tac-toe game. is uses a 2d array to 
// store the values of 'X' or 'O' and displays them on a board in
// the console screen. every turn the program checks for a winner. if 
// there is no winner, the game is tied. the program terminates after 
// one match whether there is a winner or the game is tied.
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
#include<iomanip>

using namespace std;

void drawBoard(char board[][3]);
char checkWinner3by3(char board[][3]);

//
// The main funciton is provided for you.
//
// DO NOT MODIFY THE MAIN FUNCTION
//

// ( I didnt modify)
int main()
{
	
	char board[3][3] = { { ' ',' ',' ' },{ ' ',' ',' ' },{ ' ',' ',' ' } };

	
	char player = 'X';

	
	char winner = ' ';

	int row;
	int column;


	bool is_move;
	bool is_row;
	bool is_column;

	cout << "************ TIC TAC TOE ************\n";


	while (winner == ' ')
	{
		
		is_move = false;
		is_row = false;
		is_column = false;

		
		drawBoard(board);

		cout << "Player ";
		if (player == 'X')
		{
			cout << 1;
		}
		else
		{
			cout << 2;
		}
		cout << "'s turn:" << endl;

		
		is_move = false;
		while (!is_move)
		{
			
			is_row = false;
			while (!is_row)
			{
				cout << "Row: ";
				cin >> row;
				if (row == 1 || row == 2 || row == 3)
				{
					is_row = true;
				}
				else
				{
					cout << endl << "Invalid row!" << endl;
				}
			}

		
			is_column = false;
			while (!is_column)
			{
				cout << "Column: ";
				cin >> column;
				if (column == 1 || column == 2 || column == 3)
				{
					is_column = true;
				}
				else
				{
					cout << endl << "Invalid column!" << endl;
				}
			}

			  
			if (board[row - 1][column - 1] == ' ')
			{
				
				board[row - 1][column - 1] = player;
				is_move = true;

				
				if (player == 'X')
				{
					player = 'O';
				}
				else
				{
					player = 'X';
				}
			} 

			 
			else
			{
				cout << "The selected space is occupied!" << endl;
				cout << "Select a different space:" << endl << endl;
				drawBoard(board);
			}
		} 

		cout << endl; 

					  
		winner = checkWinner3by3(board);

		if (winner == 'X' || winner == 'O')
		{
			drawBoard(board);

			cout << "Congratulations! Player ";
			if (winner == 'X')
			{
				cout << 1;
			}
			else
			{
				cout << 2;
			}
			cout << " is the winner!" << endl;
		}
		else if (winner == 'T')
		{
			drawBoard(board);

			
			cout << "It's a tie!" << endl;
		}

	} 
	cout << endl;
	system("pause");
	return 0;
}

void drawBoard(char board[][3]) // this function sets the board in order and in between we have the array and the array content
{
	cout <<"     " << 1 << "   " << 2 << "   " << 3 << endl;
	cout <<"   +---+---+---+" << endl;
	cout <<" " << 1 << " | " << board[0][0]<< " | "<< board[0][1]<< " | " << board[0][2]<< " | " << endl;
	cout <<"   +---+---+---+" << endl;
	cout <<" " << 2 << " | " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " | " << endl;
	cout <<"   +---+---+---+" << endl;
	cout <<" " << 3 << " | " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " | " << endl;
	cout <<"   +---+---+---+" << endl;
	
}

char checkWinner3by3(char board[][3]) // this function checks if a user won by checkng rows and columns and diagonally or if it tied
{
	for (int i = 0; i < 3; i++) // loops that checks row
	{
		if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X')
		{
			return 'X';
		}
		else if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O')
		{
			return 'O';
		}
	}


	for (int i = 0; i < 3; i++) // loop that checks column
	{
		if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X')
		{
			return 'X';
		}
		else if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O')
		{
			return 'O';
		}
	}

	for (int i = 0; i > 3; i++) // this loop checks if the user won diagnolly from left to right 
	{
		if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
		{
			return 'X';
		}
		else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
		{
			return 'O';
		}
		else
			continue;
	}

	for (int i = 0; i < 3; i--)//************* this loop decreaments and checks 
	{
		if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
		{
			return 'X';
		}
		else if (board[0][2] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
		{
			return 'O';
		}
		else
			continue;
	}

	int j = 0;
	int x = 0;
	// these if statements check if the game being played is a tie  
	if (board[j][0] != ' ' && board[j][1] != ' ' && board[j][2] != ' ') 
		x++;
	if (board[j + 1][j] != ' ' && board[j + 1][1] != ' ' && board[j + 1][2] != ' ')
		x++;
	if (board[j + 2][j] != ' ' && board[j + 2][1] != ' ' && board[j + 2][2] != ' ')
		x++;
	if (x == 3) // if counter is 3 it automatically gets a tie
	return 'T';

		return ' ';
}