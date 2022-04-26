#include <iostream>
using namespace std;

string family, name, card_number, card;
int pass = 0, pass1 = 0, pass2 = 0, option = 0;
int k = 0, tran, balance = 1000000, card_pass = 1234;

void balance_1();
void menu_1();
void check_pass();
void fill_1();
void transfer_1();
void pass_change_1();
void exit();

int main() {
	fill_1();
	return 0;
}
void menu_1() {
	cout << "Welcome! \n" << "1. Balance          ";
	cout << "\t   2. transfer \n" << "3. changing password       4. exit \n";
	cout << "Enter an option:   ";
	cin >> option;

	if (option == 1) {
		balance_1();

	} else if (option == 2) {
		transfer_1();

	} else if (option == 3) {
		pass_change_1();

	} else if (option == 4) {
		exit();
	
	} else {
		cout << "Invalid option";
	}
}

void balance_1() {
	cout << "Your balance is : " << balance << "\n" << "To exit this page enter 5. ";
	cin >> k;

	if (k == 5) {
		menu_1();

	} else {
		do {
			cout << "To exit this page enter 5. ";
			cin >> k;

			if (k == 5) {
				menu_1();
				break;
			}
		} while (k != 5);
	}
}
  

void check_pass() {
	int j = 0;
	string card_number = "6104337340628393";

	cout << "Please enter your password: ";
	cin >> pass;

	if (pass != card_pass) {
		cout << "Your password is incorrect. " << endl;

		for (int j = 2; j <= 3; j++) {
			cout << "Please enter your password : ";
			cin >> pass;

			if (pass != card_pass) {
				cout << "You have entered your password incorrectly " << j << " times." << endl;

			} else {
				menu_1();
				break;
			}

			if (j == 3) {
				cout << "Your Card is blocked. " << endl;
			}

			if (j == 2) {
				cout << "WARNING : your card will be blocked after entering the incorrect";
				cout << "password 3 times. " << endl;
			}

		}
	} else {
		menu_1();
	  }
}

void transfer_1() {
	cout << "Please enter the amount to transfer : ";
	cin >> tran;

	if (tran > balance) {
		cout << "Your requested amount is more than your balance. " << endl;

	} else {
		string card_number = "6104337340628393";

		cout << "Please enter the destination card number : " << endl;
		cin >> card;

		if (card.length() != 16) {
			cout << "The card number is invalid. " << endl;
			cout << "Please enter the destination card number : " << endl;
			cin >> card;

		} if (tran > balance - 10) {
			cout << "Your requested amount is more than your balance. " << endl;

		} else {
			cout << " Succesfully transfered " << endl;
			cout << " Source card : " << card_number << endl;
			cout << " Destination card : " << card << endl;
			cout << " Your balance : " << balance - tran << endl << endl;
			cout << "To exit this page enter 5. ";
			cin >> k;

			balance = balance - tran;
		}

		if (k == 5) {
			menu_1();
		} else {
			 do {
				cout << "To exit this page enter 5. ";
				cin >> k;

				if (k == 5) {
					menu_1();
					break;
				}
			 } while (k != 5);
		}
	}
}

void pass_change_1() {
	cout << "Please enter your current password : ";
	cin >> pass;

	if (pass != card_pass) {
		cout << "The password is incorrect. " << endl;

		do {
			cout << "To exit this page enter 5. ";
			cin >> k;

			if (k == 5) {
				menu_1();
				break;
			}
		} while (k != 5);

	} else {
		cout << "Please enter your new password. ";
		cin >> pass1;
		cout << "Please enter your new password again. ";
		cin >> pass2;

		if (pass1 != pass2) {
			cout << "Your eneterd passwords are not the same. " << endl;

			do {
				cout << "To exit this page enter 5. ";
				cin >> k;

				if (k == 5) {
					menu_1();
					break;
				}
			} while (k != 5);

		} else {
			card_pass = pass1;
			cout << "Your password is changed successfully. " << endl;
			check_pass();
		}
	}
}

void exit() {
	if (option == 4) {
		cout << "Thanks for choosing us! ";
	}
}

void fill_1() {

	check_pass();
}