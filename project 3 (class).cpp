#include <iostream>
using namespace std;

int main () {
	int number = 0;
	
	do {
	 cout << "Enter a number: ";
	 cin >> number;
	 
	 for (int i = 0; i < number; i++) {
		cout << "*";
     }
     
     cout << "\n";
	} while (number != 0 && number > 0);
	
	return 0;	
}
