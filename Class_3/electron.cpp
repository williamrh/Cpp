#include <cstdlib>
#include <iostream>

using namespace std;

int main() {



	cout << "n, l, m , s\n";
	
	for(int n=0;n<=5;n++) {
	
		for (int l=0;l!=n;l++) {
		
			for (int m=-l;m<=l;m++) {
			
				for ( double s=-.5;s <=.5; s++ ) {

					cout << "(" << n << ", " << l << ", " << m << ", " << s << ")\n";
				
				}
			}
		}
	}

	return EXIT_SUCCESS;


}

