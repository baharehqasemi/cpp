#include <iostream>
using namespace std;

int main() {
	int num = 0;
	int numTwo = 0;

	do {
		cout << "Enter the number: ";
		cin >> num;

	} while (num < 0 || num > 100);

	do {
		cout << "Enter the second number: ";
		cin >> numTwo;

		if (num > numTwo) {
			cout << "The number is greater than Your number" << endl;
		}
		else if (num < numTwo) {
			cout << "The number is smaller than Your number" << endl;
		}

	} while (num != numTwo);
   
		cout << "You guessed right!";
 
	return 0;
}