/**********************************************************************************************
 * 
 * CIS269 - Data Structures
 * Pima College - Spring 2023
 * Chapter 2 - Pg 119 - Ex #16
 * "milk.cpp"
 * 
 * This program inputs a number of liters of milk produced in the morning, calculates the 
 * number of cartons needed to contain it, the cost of producing it, and the expected profits,
 * then displays the output to the user.
 * 
 * Author: Sean Castle
 * 
**********************************************************************************************/

#include<iostream>							 // Preprocessing directives
#include<iomanip>							 // Parameterized stream manipulator 

using namespace std;

const double LITERS_PER_CARTON{ 3.78 };		 // Global constants
const double COST_PER_LITER{ 0.38 };
const double PROFIT_PER_CARTON{ 0.27 };

// Main
int main() {
	// Initialize local variables
	double litersProduced{ 0.0 };
	int cartonsNeeded{ 0 };
	double cost{ 0.0 };
	double profit{ 0.0 };

	// Input
	cout << "Enter the total liters of milk produced in the morning: ";
	cin >> litersProduced;

	// Processing
	cartonsNeeded = (int)(litersProduced / LITERS_PER_CARTON);
	cost = litersProduced * COST_PER_LITER;
	profit = cartonsNeeded * PROFIT_PER_CARTON;

	// Output
	cout << fixed << setprecision(2); // Fixed-point formatting
	cout << "\nCartons needed: " << cartonsNeeded << endl;
	cout << "Cost to produce: " << cost << endl;
	cout << "Expected profit: " << profit << endl;

	return 0;
} // End of main
