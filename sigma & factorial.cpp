#include <iostream>
using namespace std;

int main() {
  int number = 0;
  int sigma = 0;
  int factorial = 1;
  
  cout << "Select a number: ";
  cin >> number; 
  
  if(number > 0){
  	for (int i = 1 ; i <= number ; i++ ) {
     sigma = sigma + i;
     factorial = factorial * i;
    }
  
   cout << "The sigma is " << sigma << "\nThe factorial is " << factorial;
  } else {
  	cout << "The number is invalid";
   }

	return 0;
}
