#include <iostream>
using namespace std;

int  main() {
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	int res = 0;

    cout << "Select 3 numbers: ";
    cin >> number1;
    cin >> number2;
    cin >> number3;

    res = (number1 * 0.20) + (number2 * 0.30) + (number3 * 0.50);
    
    cout << "The result is " res;
   return 0;
}
