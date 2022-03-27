#include <iostream>
using namespace std;

int main(){
int grade [8];
string name [8];

 for (int i = 0 ; i <= 7 ; i++) {
	cout << "Please enter the name: ";
	cin >> name [i];
	cout << "Please enter the grade: ";
	cin >> grade [i];
  } 
    for (int i = 0 ; i <= 7 ; i++) {
    
      if (grade [i] < 10) 
       cout << name [i] << " " << grade [i] << endl;
  }

 return 0;
}
