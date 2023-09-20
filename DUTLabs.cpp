#include <iostream>
#include <cmath>

using namespace std;

void problem1();
void problem2();

int main()
{
  string variant;
  cout << "Enter number of the problem (1 or 2):";

  cin >> variant;

  if (variant == "1") {
		problem1();
  }
  else if (variant == "2") {
		problem2();
  }
  else {
		cout << "Wrong number of the problem" << endl;
	}

}

void problem1() {
  double a;
  double b;

  cout << "Problem 1 solution" << endl;
  
  cout << "Enter a:";
  cin >> a;
  
  cout << "Enter b:";
  cin >> b;

  double result = pow(0.315 * log(a) / (1 + pow(0.711 * log(b) / (1 + pow(log(b / a), 1.0 / 3)), 1.0 / 3)), 1.0 / 3);  

  cout << "Result:" << result << endl;
}

void problem2() {
  cout << "Problem 2 solution" << endl;

  double a;
  double b;

  cout << "Enter a:";
  cin >> a;

  cout << "Enter b:";
  cin >> b;

  double result = 8.15 * pow(b, 1.0 / 3) * log(a) / (24.38 * cos(b) * (exp(a) - pow(a, a)));

  cout << "Result:" << result << endl;
}
