#include <iostream>
#include <cstdlib>	//for srand, rand, RAND_MAX, EXIT_SUCCESS
#include <cmath>	//for sqrt, abs
#include <ctime>	//for time
using namespace std;

int main()
{
	//You can write this as 1e8, which means 1 times 10 to the eighth power.
	const int n = 100000000;
	int count = 0;

	//Seed the random number generator.
	srand(static_cast<unsigned>(time(0)));

	for (int i = 0; i < n; ++i) {
		//random number >= 0.0 and <= 1.0
		const double x = rand() / static_cast<double>(RAND_MAX);
		const double y = rand() / static_cast<double>(RAND_MAX);

		const double distance = sqrt(x * x + y * y);

		//You can eliminate the square root
		//by squaring both sides of the inequality.

		if (distance < 1) {
			++count;
		}
	}

	const double pi = 4.0 * count / n;
	const double correctpi =
		3.14159265358979323846264338327950288419716939937510;

	cout << count << " out of " << n << "\n"
		<< "computed pi ==\t" << pi << "\n"
		<< "correct pi == \t" << correctpi << "\n"
		<< "error ==\t" << abs(correctpi - pi) << "\n";

	return EXIT_SUCCESS;
}
