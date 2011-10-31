#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "I am thinking of a number in the range 1 to 10 inclusive.\n"
		<< "Keep trying until you guess it.\n\n";

	const int n = 6;

	//To mention i inside the parenthesis of the do-while loop,
	//it must be declared outside of the curly braces of the loop.

	int i;	//uninitialized variable

	while (i != n) {
		cout << "Please type your guess: ";
		cin >> i;
		if (!cin) {
			cerr << "Sorry, that wasn't a number.\n";
			return EXIT_FAILURE;
		}
	};

	//i is still alive here because it was created outside the loop.

	cout << "That's right, the number was " << n << ".\n";
	return EXIT_SUCCESS;
}
