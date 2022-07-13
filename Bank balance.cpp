#include <iostream>
using namespace std;

int main() {
  int money = 0;
  int cost = 0;
  
  cout << "Balance: ";
  cin >> money;
  cout << "Cost: ";
  cin >> cost;
  
  if(money >= cost) {
  	cout << "Successful operation.";
  }	else {
  	cout << "Not enough balance.";
  }
  	
  return 0;
} 
