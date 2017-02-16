//****************************************************************************** 
// Team #: 7                              
// CSCI/CMPE 1370                     
// Spring 2017                        
// Homework #1 
// Name: Isai Maldonado
// Name: Mauricio Flores
// Program Description: Peso and Euro Converter  //  
//****************************************************************************** 
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h> 
using namespace std;

int main() {
	//Declared constant double presicion numbers and named them DOL2MEX and DOL2EURO to stay with the same number through program//
	const double DOL2MEX = 20.3574;
	const double DOL2EURO = 0.9412;
	double usDollar, mexPesos, peso, pCents, euroMon, euro, eCents = 0;

	/*read input*/
	cout << "U.S. Dollar to Mexican Peso and Euro converter " << endl << endl; // Title**//
	cout << "Please enter an amount of U.S. Dollars: "; //Asks the user to input any number**//
	cin >> usDollar;
	cout << endl;

	/*compute USD to MXN and EUR rates, storing the whole number and decimal separately
	to use with our output*/
	mexPesos = static_cast<double>(usDollar * DOL2MEX);
	peso = floor(mexPesos);
	pCents = mexPesos - peso;


	euroMon = static_cast<double>(usDollar * DOL2EURO);
	euro = floor(euroMon);
	eCents = euroMon - euro;


	/*Set precision to 2 for printing back the user's input*/
	cout << fixed << setprecision(2);
	cout << usDollar << " U.S. Dollars are equal to: " << endl << endl;

	/*Set precision to not print out the decimal part of a double*/
	cout << fixed << setprecision(0);
	cout << setw(10) << peso << " Mexican Pesos with " << pCents * 100 << " cents" << endl << endl;
	cout << setw(10) << euro << "         Euros with " << eCents * 100 << " cents" << endl << endl;

	system("PAUSE");
	return 0;
}
