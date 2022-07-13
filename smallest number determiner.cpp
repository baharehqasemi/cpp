#include <iostream>
using namespace std;

int main () {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	cout << "Enter three numbers: ";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	 
	if ( num1 < num2 && num1 < num3 ) {
		cout << num1 << " Is the smallest number.";
	} else if ( num2 < num1 && num2 < num3 ) {
		cout << num2 << " Is the smallest number.";
    } else {
    	cout << num3 << " Is the smallest number.";
	} 
	
	return 0;
}
