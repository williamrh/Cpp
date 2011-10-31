#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	const int width = 300;            //number of columns of pixels
	const int height = width * 2 / 3; //number of rows of pixels

	const int xmax = width / 2;       //place origin at center
	const int ymax = height / 2;
	const int xmin = xmax - width;
	const int ymin = ymax - height;

	cout << "P3\n"                    //magic number of Netpbm .ppm file
		<< width << " " << height << "\n"
		<< 255 << "\n";           //maximum color value; 0 is minimum

	//Draw a simplified American flag.

	for (int y = ymax - 1; y >= ymin; --y) {		//top to bottom
		for (int x = xmin; x < xmax; ++x) {		//left to right
			// if ( x <= 0 && (y >= x/2 *1.35 ) ) {
			if ( x <= 0 && ( ( y <= -x*2 / 3 ) && (y >= x/2 *1.35 ) ) ) {
				//upper left quadrant is blue union jack
				cout << 0 << "\t" << 0 << "\t" << 255 << "\n";
			} else if ((y - ymin) % 78 < 45) {
				//white stripe
				cout << 255 << "\t" << 0 << "\t" << 0 << "\n";
			} else {
				//red stripe
				cout << 255 << "\t" << 255 << "\t" << 255 << "\n";
			}
		}
	}

	// Star
	
	
	return EXIT_SUCCESS;
}
