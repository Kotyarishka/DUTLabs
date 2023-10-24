#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int N, digit, product = 1;
	cout << "Enter N: ";
	cin >> N;

	while (N > 0) {
		digit = N % 10;
		if (digit == 9) {
			product *= digit;
		}
		N /= 10;
	}

	cout << "Product of digits equal to 9: " << product << endl;
}