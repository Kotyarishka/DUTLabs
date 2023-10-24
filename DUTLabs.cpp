#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void problem1();
void problem2();
void problem3();

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
	}
}

void problem1() {
	for (int i = 1; i <= 5; i++) {
		int x;

		cout << "Enter a number: ";
		cin >> x;

		double result = pow(sin(x), 5) + abs(5 * x - 1.5);
		cout << fixed << setprecision(2) << result << endl;
	}
}

void problem2() {
	int product = 1;

	for (int i = 1; i <= 10; i++) {
		int x;

		cout << "Enter a number: ";
		cin >> x;

		if (x < 0) {
			cout << "Number must be positive" << endl;
			exit(1);
		}

		product *= x;
	}

	cout << "Product: " << product << endl;
}

void problem3() {
	double a, b, h;

	cout << "Enter beginning: ";
	cin >> a;

	cout << "Enter end: ";
	cin >> b;

	cout << "Enter step: ";
	cin >> h;

	cout << "---------------------" << endl;
	cout << ":    x    :    y    :" << endl;
	cout << "---------------------" << endl;


	auto fnc = [](double x) {
		return sqrt(cos(x)) + sin(x);
		};

	for (double x = a; x <= b; x += h) {
		if (cos(x) < 0) {
			cout << "---------------------" << endl;
			cout << "invalid value for cos(x), x: " << x << endl;
			exit(1);
		}

		cout << ": " << setw(7) << x << " : " << setw(7) << fnc(x) << " :" << endl;
	}

	cout << "---------------------" << endl;
}