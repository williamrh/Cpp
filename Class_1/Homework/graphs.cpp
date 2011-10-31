#include <cstdlib>
#include <iostream>

using namespace std;

int main()	{

	int rows,columns,wide,high;
	
	cout<< "How many rows of boxes?: ";
	cin >> rows;
	cout<< "How many columns of boxes?: ";
	cin >> columns;
	cout<< "How many characters wide is each box?: ";
	cin >> wide;
	cout<< "How many characters high is each box?: ";
	cin >> high;


	for ( int r = 0;r < rows; r++ ) {
		for ( int c = 0; c < columns; ++c ) {
			cout << "+";
			for ( int w = 0; w< wide; ++w ) {
				cout << "-";
			}
		}
		cout << "\n";
		for ( int h = 0; h < high; ++h ) {
			for ( int c = 0; c < columns; ++c) {
				cout << "|";
				for ( int w = 0; w< wide; ++w ) {
					cout << " ";
				}
			}
			cout << "\n";
		}		
	}

}

