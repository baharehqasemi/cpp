#include <iostream>
using namespace std;

int main () {

  int grade1 = 0;
  int grade2 = 0;
  int final = 0;
  
  cout << "Enter the grades: ";
  cin >> grade1;
  cin >> grade2;
  
  if (grade1 >= 0 && grade2 >= 0 && grade1 <= 20 && grade2 <= 20) {
     final = (grade1 * 0.4) + (grade2 * 0.6);

     if (final < 10) {
      cout << final << " is your final grade.\nCongrats! Exam failed!";
     } else { 
	  cout << final << " is your final grade.\nCongrats! You successfuly passed!";
     }
  } else {
   	cout << "Operation failed ";
  }
    
	return 0; 
}
