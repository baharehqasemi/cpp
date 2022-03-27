#include <iostream>
using namespace std;

int main() {
	int number = 0;
	int i , l = 0;
	
	cout << "Select a number: ";
	cin >> number , l = 0;
	
	for ( int i = 2 ; i < number ; i++ ) {
		  if ( number % i == 0) {
		  	cout << number << " is not a prime number";
		  	l = 1;
		  	break; }		 
	}
	if ( l == 0) {
		cout << number << " is a prime number";}
	
	return 0;
}
