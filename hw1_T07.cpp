//****************************************************************************** 
// Team #: 7                              
// CSCI/CMPE 1370                     
// Spring 2017                        
// Homework #1 
// Name: Isai Maldonado
// Name: Mauricio Flores
//  Using your own words, write here a description of what the program does.  //  
//****************************************************************************** 
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	//Here we declared a variable , double, and added a constant in front of it to keep the number throughout the program//
	// I have DOL2MEX and DOL2EURO assigned to const double, I also added usDollar and mexPesos, and euroMon//
	//and used double because thats what we are using in this program//
	const double DOL2MEX = 20.3574; 
	const double DOL2EURO = 0.9412;
	double usDollar, mexPesos, peso, cents, euroMon, euro, eCents = 0;

	
	cout << "U.S. Dollar to Mexican Peso and Euro converter ";//This is just like a title so the user can know what it is about//
	cout << endl << endl; //here a new line was started//
	cout << "Please enter an amount of U.S. Dollars: "; // The user gets asked to input any number//
	cin >> usDollar; //here he or she inputs the data//
	cout << fixed << setprecision(2); //*******THIS IS WHERE I INPUTED THE SETPRECISION************//
	cout << endl; //new line started//
	 

	// we use static cast to make sure our answer is converted to double as well as rounded, which is what this assignment is about //
	mexPesos = static_cast<double>(((usDollar * 100) + .5) / 100); 
	euroMon = static_cast<double>(((usDollar * 100) + .5) / 100);


	//we use static cast again but this time we multiplied the rounded dollar times the mexican and euro dollar and//
	//assigned it to mexPesos and euroMon// 
	mexPesos = static_cast<double>(usDollar * DOL2MEX );
	cout << fixed << setprecision(0);
	cents = modf(mexPesos, &peso);
	euroMon = static_cast<double>(usDollar * DOL2EURO );
	cout << fixed << setprecision(0);
	eCents = modf(euroMon, &euro);
	// here we just output the dollar inputed and the result of ,exPesos and euroMon//
	cout << usDollar << " U.S. Dollars are equal to: " << endl;
	cout << endl;



	cout << setw(7)<< peso << " Mexican Pesos with " <<cents*100<< " cents"	 << endl;
	cout << endl;
	cout << setw(7)<< euro << "         Euros with " <<eCents*100<<" cents"  << endl;

	cout << endl;
	


	system("PAUSE");
	return 0;
}