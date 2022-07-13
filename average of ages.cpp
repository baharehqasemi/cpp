#include <iostream>
using namespace std;

int main() {
	int age1 = 0;
	int age2 = 0;
	int age3 = 0;
	int result = 0;
	
	cout << "Please enter your age: ";
	cin >> age1;
	cout << "Please enter your age: ";
	cin >> age2;
    cout << "Please enter your age: ";
	cin >> age3;
	
	result = (age1 + age2 + age3) / 3;
	
	cout << "The average of the ages is " << result;
	
	return 0;
}
