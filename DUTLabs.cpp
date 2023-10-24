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
	double x; double A; double C;

	cout << "Enter x: ";
	cin >> x;

	cout << "Enter A: ";
	cin >> A;

	cout << "Enter C: ";
	cin >> C;

	if (A == C) {
		double result = x * pow((A - C), 2);
		double result2 = x + pow(A, 3);

		cout << "Result: " << result << endl;
		cout << "Result2: " << result2 << endl;
	}
	else {
		double result = pow(x, 3) - A;

		cout << "Result: " << result << endl;
	}
}

void problem2() {
	double x; double y;

	cout << "Enter x: ";
	cin >> x;

	cout << "Enter y: ";
	cin >> y;

	double lineEquation = -1 * x +1;
	double lineEquation2 = x + 1;
	double lineEquation3 = x - 1;

	// -1 < x < 1

	if (-1 <= x && x <= 1 && y >= lineEquation && y >= lineEquation2 && y >= lineEquation3) {
		cout << "Point is inside the triangle" << endl;
	}
	else {
		cout << "Point is outside the triangle" << endl;
	}
}