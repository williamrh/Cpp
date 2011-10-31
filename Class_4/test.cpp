//flag.C
//Draw a simple flag of my own design.

#include <iostream>
#include <cstdlib>	//for the abs that takes and receives an int
#include <cmath>
using namespace std;

int main()
{
	const int width = 300;
	const int height = width * 2 / 3;

	const int xmax = width / 2;
	const int xmin = xmax - width;
	const int ymax = height / 2;
	const int ymin = ymax - height;

	cout <<"P3\n"
		<< width << " " << height << "\n"
		<< 255 << "\n";

	//Draw a red X crossing behind a black circle.

	for (int y = ymax - 1; y >= ymin; --y) {
		for (int x = xmin; x < xmax; ++x) {

			//if the pixel is within 50 pixels of the center
			if (x * x + y * y <= 50 * 50) {
				//black
				cout << 0 << "\t" << 0 << "\t" << 0 << "\n";
			}

			//if y is sandwiched between x and x+30,
			else if (abs(x) <= abs(y) && abs(y) < abs(x) + 30) {
				//red
				cout << 200 << "\t" << 0 << "\t" << 0 << "\n";
			}

			else {
				//white background
				cout << 255 << "\t" << 255 << "\t" << 255 << "\n";
			}
		}
	}

	return EXIT_SUCCESS;
}