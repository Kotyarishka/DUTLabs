#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void problem1();
void problem2();
void problem3();

int main() {
  int problem;

  cout << "Enter problem number (1, 2, 3): ";
  cin >> problem;

  switch (problem)
  {
    case 1:
			problem1();
			break;
    case 2: 
      problem2();
      break;
    case 3:
      problem3();
			break;
    default:
      break;
  }
}

void problem1() {
  int startPoint, steps = 0;
  cout << "Enter a number:";
  cin >> startPoint;

  while (startPoint != 1) {
    if (startPoint % 2 == 0) {
      startPoint /= 2;
    }
    else {
      startPoint = 3 * startPoint + 1;
    }
    cout << startPoint << "\n";
    steps++;
  }

  cout << "Steps amount: " << steps << "\n";
}

void problem2() {
  double pi4 = 0.;
  long n;

  cout << "Number of iterations? ";
  cin >> n;

  for (long i = 0; i < n; i++) {
    if (i % 2 == 0) {
      pi4 += 1.0 / (2 * i + 1);
    }
    else {
      pi4 -= 1.0 / (2 * i + 1);
    }
  }

  cout.precision(20);
  cout << "Calculated Pi: " << (pi4 * 4.) << "\n";
}

void problem3() {
  int n = 0;
  cout << "Enter the size of the square (between 1 and 20): ";
  cin >> n;

  if (n < 1 || n > 20) {
    cout << "The number you entered is not in the needed range.";
  }
  else {
    int sidesCount = n - 2;
    cout << '+';
    for (int i = 0; i < sidesCount; i++)
      cout << '-';
    cout << '+' << endl;
    for (int i = 0; i < sidesCount; i++) {
      cout << '|';
      for (int j = 0; j < sidesCount; j++)
        cout << ' ';
      cout << '|' << endl;
    }
    cout << '+';
    for (int i = 0; i < sidesCount; i++)
      cout << '-';
    cout << '+' << endl;
  }
}