#include <iostream>
using namespace std;

int main() {
  int length = 0;
  int height = 0;
  int perimeter = 0;
  int area = 0;
  
  
  cout << "Please enter the lengh: ";
  cin >> length;
  cout << "Please enter the height: ";	
  cin >> height;
  
  perimeter = (length + height) * 2;
  area = length * height;
  
  cout << "The  perimeter  is " <<  perimeter;
  cout << "\nThe area is " << area;
  
  return 0;
   }
