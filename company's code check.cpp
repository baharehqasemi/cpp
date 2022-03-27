#include <iostream>
using namespace std;

int main() {
	string id;
	int control_digit;
	int num[11];

	cout << "Please enter your company's ID (11 digits): ";
	cin >> id;

	if (id.length() == 11) {
		control_digit = id[9];
		num[9] = (id[9] - 48) + 2;
		//cout << "num[9] = " << num[9] << '\n';

		for (int i = 0; i < 9; i++) {

			switch (i) {
			case 0:
				num[0] = ((id[0] - 48) + num[9]) * 29;
				break;

			case 1:
				num[1] = ((id[1] - 48) + num[9]) * 27;
				break;

			case 2:
				num[2] = ((id[2] - 48) + num[9]) * 23;
				break;

			case 3:
				num[3] = ((id[3] - 48) + num[9]) * 19;
				break;

			case 4:
				num[4] = ((id[4] - 48) + num[9]) * 17;
				break;

			case 5:
				num[5] = ((id[5] - 48) + num[9]) * 29;
				break;

			case 6:
				num[6] = ((id[6] - 48) + num[9]) * 27;
				break;

			case 7:
				num[7] = ((id[7] - 48) + num[9]) * 23;
				break;

			case 8:
				num[8] = ((id[8] - 48) + num[9]) * 19;
				break;

			case 9:
				num[9] = ((id[9] - 48) + num[9]) * 17;
				break;
			}

		}

		control_digit = 0;
		for (int j = 0; j < 10; j++) {
			control_digit = control_digit * num[j];
			//cout << num[j] << '\n';
		}

		//cout << "control_digit_Sum= " << control_digit << '\n';

		control_digit = control_digit % 11;
		//cout << "control_digit_R%11 = " << control_digit << '\n';

		if (control_digit == 0) {
			num[10] = (id[10] - 48);
			if (num[10] == control_digit) {
				cout << "Valid number " << '\n' << '\n';
			}

			else {
				cout << "Invalid number" << '\n' << '\n';
			}
		}

		//cout << "*****" << '\n' << "control_digit = " << control_digit << "      id[10] = " << id[10] << '\n' << "*****" << '\n';

	}
	else {
		cout << "Invalid number";
	}

	return 0;
}
