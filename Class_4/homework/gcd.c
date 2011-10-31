#include <iostream>
#include <cstdlib>

using namespace std;

int gcd(int a, int b);

int main() {
	const int a = 2 * 3 * 5;
	const int b =     3 * 5 * 7;

	cout << "The gcd of " << a << " and " << b << " is "
	<< gcd(a, b) << ".\n";

	return EXIT_SUCCESS;
}

int gcd(int a, int b) {

	if ( b == 0 ) {
		return a;
	}
	
	else {
		return gcd(b, a % b);
	}

}