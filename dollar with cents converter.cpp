//******************************************************************************
// Team # 7                               CSCI/CMPE 1370                       Spring 2017                       Homework # 1 
// Mauricio Flores
// Isai Maldonado 
// This program converts dollars to euros and pesos and it also makes there value to whole numbers   
//  
//****************************************************************************** 

#include <iostream>
#include <iomanip>

using namespace std;
int main()

{
	double dollar, pesos, euros, mexcents, eurocents, mexdollars, eurodollars; // declared all my variables needed
	const double DOL2MEX = 20.3574, DOL2EURO = 0.9412; // declared my constants
	cout << "U.S. Dollar to Mxican Peso and Euro converter." << endl; // showed in monitor whats in quotations
	cout << "\n\nPlease enter an amount of U.S. Dollars: "; 

	cin >> dollar; // made the user input the value of how many dollars he wants to convert
	pesos = DOL2MEX * dollar; // function that converts dollars to pesos
	euros = DOL2EURO * dollar;// function that converts dollars to euros
	


	pesos = static_cast<double>(static_cast<int>((pesos * 100.0) + 0.5)) / 100.0; // rounded pesos to its second decimal place 
	euros = static_cast<double>(static_cast<int>((euros * 100.0) + 0.5)) / 100.0; // rounded euros to its second decimal place
	mexdollars = static_cast<int> (pesos); // used the variable mexdollars to hold pesos as an integer and truncated the cents
	eurodollars = static_cast<int> (euros); // used the variable eurodollars to hold euros as an integer and truncated the cents


	mexcents = static_cast<int> ((pesos - mexdollars)*100); // with this funtcion i made my pesos cents into whole numbers
	eurocents = static_cast<int> ((euros - eurodollars)*100); // same as above line but euros

	cout << "\n" << dollar << " U.S. Dollars are equal to " << endl << endl; // showed in monitor whats in quotations
	cout << setw(10) << mexdollars  << " Mexican Pesos with " << mexcents << " cents" << endl<< endl; // set a width and displayed pesos with its cents 
	cout << setw(10)  << eurodollars << setw(20) << " Euros with " << eurocents << " cents " << endl << endl;// same as above but with euros

	return 0;



}