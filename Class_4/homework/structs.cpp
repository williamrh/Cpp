#include <iostream>

using namespace std;

struct  Student{
	char *			 	Name;
	int						ID;
	const char *	Year;
};

int main() {

	
	int numStudents = 0;
	cout << "How Many Students Have Registered For Your Class?: ";
		
	cin >> numStudents;

	numStudents--;
	
	if ( !cin ) {
	
		cout << "\n" << "That isn't a number at all!" << endl;
		// return EXIT_FAILURE;
	
	}
	
	else if ( numStudents < 0 ) {
	
		cout << "\n" << "I am sorry to hear that! You must have a boring class" << endl;
		// return EXIT_SUCCESS;
	
	}
	
	
	struct Student ClassArray[numStudents];
	char name[256];

	for (int i = 0; i<=numStudents; i++ ) {
	
		cout << "What is Student #" << i+1 << "'s First And Last Name?: ";
		cin.getline(name,256);

		
		// ClassArray[i].Name = name;


		cout << "What is the Student's ID #? (Format MonthDay => 0517 )?: ";
		int id;
		cin >> id;
		
		
		if ( ! cin ) {
		
			cout << "Please enter the student's ID as a their month and day of birth i.e. '0517'" << endl;
			// return EXIT_FAILURE;
			
		}

		ClassArray[i].ID = id;
		
		
		cout << "\n" << "What is the Student's current year? ( Soph,Freshman,Senior,etc)?: ";
		char year[50];
		cin >> year;
		
		if ( ! cin ) {
		
			cout << "Please enter the student's year as a normal string i.e. 'Freshman'" << endl;
			// return EXIT_FAILURE;
			
		}

		ClassArray[i].Year = year;
	}


	// return EXIT_SUCCESS;

}

