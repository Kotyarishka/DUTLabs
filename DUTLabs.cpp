#include <iostream>
#include <cmath>

using namespace std;

void problem1();
void problem2();

int main() {
	int problemNumber;

	cout << "Enter problem number (1, 2): ";
	cin >> problemNumber;

	switch (problemNumber) {
		case 1:
			problem1();
			break;
		case 2:
			problem2();
			break;
	}
}

void problem1() {
	int n;
	cout << "Enter n: ";
	cin >> n;

	int firstDigit = n / 100;
	int secondDigit = (n / 10) % 10;
	int thirdDigit = n % 10;

	int evenDigitsCount = 0;

	if (firstDigit % 2 == 0) {
		evenDigitsCount++;
	}

	if (secondDigit % 2 == 0) {
		evenDigitsCount++;
	}

	if (thirdDigit % 2 == 0) {
		evenDigitsCount++;
	}

	cout << "Even digits count: " << evenDigitsCount << endl;
}

void problem2() {
	// Ввести номер поїзда і вивести час його відправлення.

	int trainNumber;
	cout << "Enter train number: ";
	cin >> trainNumber;

	switch (trainNumber) {
		case 1:
			cout << "Train 1 departs at 8:00" << endl;
			break;
		case 2:
			cout << "Train 2 departs at 9:00" << endl;
			break;
		case 3:
			cout << "Train 3 departs at 10:00" << endl;
			break;
		case 4:
			cout << "Train 4 departs at 11:00" << endl;
			break;
		case 5:
			cout << "Train 5 departs at 12:00" << endl;
			break;
		case 6:
			cout << "Train 6 departs at 13:00" << endl;
			break;
		case 7:
			cout << "Train 7 departs at 14:00" << endl;
			break;
		default:
			cout << "Invalid train number" << endl;
			break;
	}
}