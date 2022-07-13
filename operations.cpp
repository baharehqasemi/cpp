#include <iostream>
using namespace std;

int main() {
   int number1 = 0;
   int number2 = 0;
   int sum = 0;
   int subtraction = 0;
   int multiplication = 0;
   int division = 0;
   
   cout << "Please enter a number: ";
   cin >> number1;
   cout << "Please enter a number: ";
   cin >> number2;
   
   sum = number1 + number2;
   subtraction = number1 - number2;
   multiplication = number1 * number2;
   division = number1 / number2;

   cout << "The result of the sum is " << sum;
   cout << "\nThe result of the subtraction is " << subtraction;
   cout << "\nThe result of the multiplication is " << multiplication;
   cout << "\nThe result of the division is " << division;
   
   return 0;
   }
