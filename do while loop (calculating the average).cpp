#include <iostream>
using namespace std;

int main () {
	int counter = 0;
	int number = 0;
	int sum = 0;
	int average = 0;
	
   do {
    	cout << "Please enter the numbers: ";
		cin >> number;
		sum = sum + number;
	
		if (number != 0) {
			counter++;	
		}
	 } while (number != 0);
	 	average = sum / counter;
	cout << "The average is: " << average;
	 
	return 0;
}
