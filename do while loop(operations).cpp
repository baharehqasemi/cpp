#include <iostream>
using namespace std;

int main() {
	int numberOne = 0;
	int numberTwo = 0;
	int operation;

	do {
		cout << "Enter two numbers: " << endl;
		cin >> numberOne;
		cin >> numberTwo;

		cout << "choose an operation" << endl << "(1.sum, 2.subtraction, "
			<< "3.multiplication, 4.division" << endl;
		cin >> operation;
	} while (operation == 0);

	if (operation == 1) {
		cout << numberOne + numberTwo;
	} else if (operation == 2) {
		cout << numberOne - numberTwo;
	} else if (operation == 3) {
		cout << numberOne * numberTwo;
	} else {
		cout << numberOne / numberTwo;
	}

	return 0;
}