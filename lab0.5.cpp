/* Mihaela Brodetchi
	C00242687*/
#include <iostream>
using namespace std;
int main() {

	//Q1. Swap 2 variables around without using a third variable.

	int numGiraffes = 0;
	int numElephants = 0;
	cout << "How many Giraffes.";
	cin >> numGiraffes;
	cout << "How many Elephants.";
	cin >> numElephants;

	numGiraffes = numGiraffes + numElephants;
	numElephants = numGiraffes - numElephants;
	numGiraffes = numGiraffes - numElephants;

	cout << "Giraffes = " << numGiraffes << " and Elephants = " << numElephants << " \n \n";


	//Q2. Write a program that lies. Outputs odd when even and vice versa.

	int userInt;
	cout << " \n Enter an integer: ";
	cin >> userInt;

		if (userInt % 2 == 0) {
			cout << " Your number is odd. \n \n";
		}
		else {
			cout << " Your number is even. \n \n ";
		}


	//Q3. Output largest parcel size out 3 parcels.

	int parcelOne = 0;
	int parcelTwo = 0;
	int parcelThree = 0;

	cout << "Enter your three parcel sizes. \n ";
	cin >> parcelOne >> parcelTwo >> parcelThree;

		if (parcelOne > parcelTwo && parcelOne > parcelThree) {
			cout << " The biggest parcel is \n \n" << parcelOne;
		}
		else if (parcelTwo > parcelOne && parcelTwo > parcelThree) {
			cout << " The biggest parcel is \n \n" << parcelTwo;
		}
		else {
			cout << " The biggest parcel is \n \n" << parcelThree;
		}
			cout << "\n";

	//Q4. Output Multiplication table.
			
	int rows = 1;
	int columns = 1;

		for (rows = 1; rows <= 12; rows++) {

		cout << "\n";

				for (columns = 1; columns <= 12; columns++) {

				cout << "\t" << rows * columns;
		}

		}
		
return 0;
}