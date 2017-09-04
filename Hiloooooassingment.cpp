#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
#include <ctime>

//srand(time(NULL));

int main()
{
	int usersGuess = 0;
	int randomNum;
	bool estimation = false;
	//Generate a random number between 1-100
	srand(time(NULL));
	randomNum = rand() % 100 + 1;
	//cout << "Lets play a Number Guessing Game!" << endl;
	//cout << "Guess a number between 1 and 100" << endl;
	//cin >> estimation;
	//cout << randomNum;


	//so if the user guesses the right answer, then the loop ends.
	//so that means when the user guesses the right answer, then the condition in the while loop changes so that it may exit the loop.

	int i = 0;
	while ( estimation == false) //for (int i = 0, estimation == false, i++)
	{		
		cout << "Guess a number between 1 and 100" << endl;
		cin >> usersGuess;
		if (usersGuess > randomNum)
		{
			cout << "Too high!!" << endl << endl;
			//cout << "Guess a number between 1 and 100" << endl;
			i++;
			
		}
		else if (usersGuess < randomNum)
		{
			cout << "Too low!!" << endl << endl;
			//cout << "Guess a number between 1 and 100" << endl;
			i++;
		}
		else
		{
			cout << "You win!!" << endl << endl;
			i++;
			cout << "It took you " << i << " guesses." << endl << endl;
			switch (i)
			{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
				cout << "Amazing! Or was it luck?" << endl;
				break;
			case 5:
			case 6:
				cout << "That's a very good score..." << endl;
				break;
			case 7:
			case 8:
				cout << "That's pretty good but you can do better..." << endl;
				break;
			case 9:
			case 10:
				cout << "Not too shabby, but not too good either..." << endl;
				break;
			case 11:
				cout << "What a terrible score!..." << endl;
				break;

			}
			estimation = true;
		}
	}

	

	//Ask the user to guess the number, add a looping condition

	//for (int i = 0; usersGuess != randomNum; i++)
	//{
	//	int usersGuess = 0;
	//	cout << "Guess a number between 1 and 100" << endl;
	//	cin >> usersGuess;
	//	cout << randomNum;
	//	if (usersGuess == randomNum /*usersGuess > randomNum*/)
	//	{
	//		cout << "You win!!" << endl << endl;
	//		cout << "It took you " << i << "guesses." << endl << endl;
	//		break;
	//		/*cout << "Too high!!" << endl << endl;
	//		cout << "Guess a number between 1 and 100" << endl;
	//		cin >> usersGuess;*/
	//	}
	//	else if (usersGuess < randomNum)
	//	{
	//		cout << "Too low!!" << endl << endl;
	//		cout << "Guess a number between 1 and 100" << endl;
	//		cin >> usersGuess;
	//		cout << randomNum;
	//	}
	//	else(usersGuess > randomNum /*usersGuess == randomNum*/); 
	//	{
	//		cout << "Too high!!" << endl << endl;
	//		cout << "Guess a number between 1 and 100" << endl;
	//		cin >> usersGuess;
	//		cout << randomNum;
	//		/*	cout << "You win!!" << endl << endl;
	//			cout << "It took you " << i << "guesses." << endl << endl;*/
	//	}

		

		system("PAUSE");
		return 0;
	}


	// If the user is right, the game ends


	//If the user's guess is too high or too low, the program informs the user of that fact and asks for another guess.


	//This repeats until the user gets the number correct.
		


	
