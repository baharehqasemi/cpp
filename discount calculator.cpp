#include <iostream>
using namespace std;

int main() {
  int price1 = 0;
  int price2 = 0;
  int price3 = 0;
  int payment = 0;
  
  cout << "Enter the prices: ";
  cin >> price1;
  cin >> price2;
  cin >> price3;
  
  payment = (price1 + price2 + price3) * 0.9;
  cout << "Your total is " << payment;
  
  return 0;
 } 
