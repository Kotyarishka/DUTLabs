#include <iostream>
#include <cstdlib>

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
  const int m = 4;
  const int n = 3;

  int arr[m][n]{ {} };

  srand(time(NULL));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 200 - 100;
		}
  }


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
