#include <cstdlib>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {

	double value,down,years,interest; 
	char ask[4];
	
	cout << "Welcome to the Mortgage Calculator!\nWhat is the purchase price of the home you would like to purchase?: ";
	
	if ( ! (cin >> value)  ) {
		cout << "That is not a valid number!\n";
		exit(1);
	}
	
	cout << "What is your interest rate? (%): ";

	if ( ! (cin >> interest)  ) {
		cout << "That is not a valid number!\n";
		exit(1);
	}
	
	cout << "How much will is your down payment?: ";

	if ( ! (cin >> down)  ) {
		cout << "That is not a valid number!\n";
		exit(1);
	}
	
	
	cout << "Finally, How many years is this loan for?: ";

	if ( ! (cin >> years)  ) {
		cout << "That is not a valid number!\n";
		exit(1);
	}


	const double quotient = interest / 100 / 12;
	const double power = pow(1 + quotient, years * 12);
	const double P = (value - down) * quotient * power / (power - 1);
	
	cout.precision(2);
	cout << "Your Monthly Payment is $"<< fixed << P << "\n\n";
	
	cout << "Would you like to know how much interest you'd pay the bank over the course of the mortgage? (Yes/No): ";
	
	cin >> ask;
	
	if ( strstr(ask,"Y") ) {
		
		double t_interest = ( P * (years*12) ) - ( value - down ) ;
		cout << "OK!\nYour total interest paid is $" << t_interest << "\n";
		
	}else{
		
		cout << "Fine! I didn't want to tell you anyway!\n\n";
		
	}
	return 0;
}


