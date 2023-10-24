#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void problem1();
void problem2();
void problem3();
void problem4();

int main() {
	int problemNumber;

	cout << "Enter problem number (1, 2, 3): ";
	cin >> problemNumber;

	switch (problemNumber) {
		case 1:
			problem1();
			break;
		case 2:
			problem2();
			break;
		case 3:
			problem3();
			break;
		case 4:
			problem4();
			break;
	}
}

void problem1() {
	bool answer;
	int value;

	cout << "Enter a value: ";
	cin >> value;

	answer = (value >= 0 && value < 10) || (value * 2 < 20 && value - 2 > -2) || (value - 1 > 1 && value / 2 < 10) || value == 111;
	
	cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
}

void problem2() {
	double var1, var2, var3, var4, var5;

	cout << "Enter 5 numbers: ";
	cin >> var1 >> var2 >> var3 >> var4 >> var5;

	cout << fixed << setprecision(1) << var1 << endl;
	cout << fixed << setprecision(2) << var2 << endl;
	cout << fixed << setprecision(6) << var3 << endl;
	cout << fixed << setprecision(2) << var4 << endl;
	cout << fixed << setprecision(0) << var5 << endl;
}

void problem3() {
	int num1, num2;
	float epsilon = 0.000001f;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	if (num1 == 0 || num2 == 0) {
		cout << "Cannot divide by zero" << endl;
		exit(1);
	}

	float division1 = 1.0f / num1;
	float division2 = 1.0f / num2;

	if (abs(division1 - division2) < epsilon) {
		cout << "Results are equal (by 0.000001 epsilon)" << endl;
	}
	else {
		cout << "Results are not equal (by 0.000001 epsilon)" << endl;
	}
}

void problem4() {
	int num1, num2, num3, num4;

	cout << "Enter four numbers: ";
	cin >> num1 >> num2 >> num3 >> num4;

	if (
		num1 >= 1 && num1 <= 255 &&
		num2 >= 1 && num2 <= 255 &&
		num3 >= 1 && num3 <= 255 &&
		num4 >= 1 && num4 <= 255
		) {
		cout << "IP Address: " << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
	}
	else {
		cout << "Invalid IP Address" << endl;
	}
}