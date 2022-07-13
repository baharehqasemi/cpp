#include <iostream>
using namespace std;

int main() {
  int number1;
  int number2;
  
  cout << "Enter two numbers: ";
  cin >> number1;
  cin >> number2;
  
  if (number1 > number2) {
   cout << number1 << " is bigger than " << number2;
   cout <<"\nThe order of the numbers is: " << number1 << " , " << number2;
  } else {   
    cout << number2 << " is bigger than " << number1;
    cout <<"\nThe order of the numbers is: " << number2 << " , " << number1;
   }
    
  return 0;
}
