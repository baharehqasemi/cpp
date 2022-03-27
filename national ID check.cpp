#include <iostream>
using namespace std;

int main() {
	string id;
	int control_digit;
	int num[10];

	cout << "Please enter your National ID number (10 digits): ";
	cin >> id;

	if (id.length() == 10) {
		control_digit = id[9];
		for (int i = 0; i < 9; i++) {

			switch (i) {
			case 0:
				num[0] = (id[0] - 48) * 10;
				break;

			case 1:
				num[1] = (id[1] - 48) * 9;
				break;

			case 2:
				num[2] = (id[2] - 48) * 8;
				break;

			case 3:
				num[3] = (id[3] - 48) * 7;
				break;

			case 4:
				num[4] = (id[4] - 48) * 6;
				break;

			case 5:
				num[5] = (id[5] - 48) * 5;
				break;

			case 6:
				num[6] = (id[6] - 48) * 4;
				break;

			case 7:
				num[7] = (id[7] - 48) * 3;
				break;

			case 8:
				num[8] = (id[8] - 48) * 2;
				break;
			}
			
		}

		control_digit = 0;
		for (int j = 0; j < 9; j++) {
			control_digit = control_digit + num[j];
			
		}

		//cout << "control_digit_Sum= " << control_digit << '\n';

		control_digit = control_digit % 11;
		//cout << "control_digit_R%11 = " << control_digit << '\n';

		if (control_digit >= 2) {
			control_digit = 11 - control_digit;
		}

		//cout << "***************" << '\n' << "control_digit = " << control_digit << "      id[9] = " << id[9] << '\n' << "***************" << '\n';
		num[9] = (id[9] - 48);
		if (num[9] == control_digit) {
			cout << "Valid number " << '\n'<<'\n';
		}
		
		else {
			cout << "Invalid number" << '\n'<< '\n';
		}
	} 
	else {
		cout << "Invalid number";
	}

	return 0;
}
