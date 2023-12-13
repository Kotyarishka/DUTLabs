#include <iostream>
#include <cstdlib>

using namespace std;

void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem15();

int main()
{
  string variant;
  cout << "Enter number of the problem (1, 2, 3, 4, 5, 6 or 15):";

  cin >> variant;

  if (variant == "1") {
		problem1();
  }
  else if (variant == "2") {
		problem2();
  }
  else if (variant == "3") {
    problem3();
  }
  else if (variant == "4") {
		problem4();
	}
  else if (variant == "5") {
		problem5();
	}
  else if (variant == "6") {
    problem6();
  }
  else if (variant == "15") {
		problem15();
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

  cout << "Array:" << endl;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  int sumOfEvensInRows = 0;

  for (int i = 0; i < m; i++) {
    int sumOfEvensInRow = 0;

    for (int j = 0; j < n; j++) {
      if (arr[i][j] % 2 == 0) {
				sumOfEvensInRow += arr[i][j];
			}
		}

		sumOfEvensInRows += sumOfEvensInRow;

		cout << "Sum of evens in " << i + 1 << " row is " << sumOfEvensInRow << endl;
  }

  cout << "Sum of all evens in rows is " << sumOfEvensInRows << endl;
}

void problem2() {
  const int m = 6;
  const int n = 4;

  int arr[m][n]{ {} };

  srand(time(NULL));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 200 - 100;
		}
  }

  cout << "Array:" << endl;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
    cout << endl;
  }

  int sumOfEvensInCollums = 0;

  for (int j = 0; j < n; j++) {
		int sumOfEvensInCollum = 0;
    for (int i = 0; i < m; i++) {
      if (arr[i][j] % 2 == 0) {
				sumOfEvensInCollum += arr[i][j];
			}
		}

    sumOfEvensInCollums += sumOfEvensInCollum;
    cout << "Sum of evens in " << j + 1 << " colum is " << sumOfEvensInCollum << endl;
	}

  cout << "Sum of all evens in colums is " << sumOfEvensInCollums << endl;
}

void problem3() {
  const int m = 5;
  const int n = 7;

  int arr[m][n]{ {} };

  srand(time(NULL));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      arr[i][j] = rand() % 200 - 100;
    }
  }

  cout << "Array:" << endl;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  int sumOfRows = 0;

  for (int i = 0; i < m; i++) {
		int sumOfRow = 0;
    for (int j = 0; j < n; j++) {
			sumOfRow += arr[i][j];
		}
		sumOfRows += sumOfRow;
		cout << "Sum of " << i + 1 << " row is " << sumOfRow << endl;
	}

  cout << "Sum of all rows is " << sumOfRows << endl;
}

void problem4() {
  const int m = 4;
  const int n = 6;

  int arr[m][n]{ {} };

  srand(time(NULL));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      arr[i][j] = rand() % 200 - 100;
    }
  }

  cout << "Array:" << endl;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  int sumOfColums = 0;

  for (int j = 0; j < n; j++) {
    int sumOfColum = 0;
    for (int i = 0; i < m; i++) {
      sumOfColum += arr[i][j];
    }
    sumOfColums += sumOfColum;
    cout << "Sum of " << j + 1 << " colum is " << sumOfColum << endl;
  }

  cout << "Sum of all colums is " << sumOfColums << endl;
}

void problem5() {
  const int m = 3;
  const int n = 4;

  int arr[m][n]{ {} };

  srand(time(NULL));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      arr[i][j] = rand() % 200 - 100;
    }
  }

  cout << "Array:" << endl;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  int max = arr[0][0];
  int maxIndex = 0;

  for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {
      if (arr[i][j] > max) {
				max = arr[i][j];
				maxIndex = j;
			}
		}
	}

  cout << "Max element is " << max << endl;
	cout << "Index of max element is " << maxIndex << endl;
}

void problem6() {
  const int m = 3;
  const int n = 3;

  int arr[m][n]{ {} };

  srand(time(NULL));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      arr[i][j] = rand() % 200 - 100;
    }
  }

  cout << "Array:" << endl;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  int sumOfDiagonal1 = 0;
  int sumOfDiagonal2 = 0;

  for (int i = 0; i < m; i++) {
		sumOfDiagonal1 += arr[i][i];
		sumOfDiagonal2 += arr[i][n - i - 1];
	}

  cout << "Sum of diagonal 1 is " << sumOfDiagonal1 << endl;
  cout << "Sum of diagonal 2 is " << sumOfDiagonal2 << endl;
  cout << "Sum of all elements is " << sumOfDiagonal1 + sumOfDiagonal2 << endl;
}

void problem15() {
  const int m = 3;
  const int n = 3;

  int arr[m][n]{ {} };

  srand(time(NULL));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      arr[i][j] = rand() % 200 - 100;
    }
  }

  cout << "Array:" << endl;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  int sumOfDiagonal1 = 0;
  int sumOfDiagonal2 = 0;

  for (int i = 0; i < m; i++) {
    sumOfDiagonal1 += arr[i][i];
    sumOfDiagonal2 += arr[i][n - i - 1];
  }

  cout << "Sum of diagonal 1 is " << sumOfDiagonal1 << endl;
  cout << "Sum of diagonal 2 is " << sumOfDiagonal2 << endl;
  cout << "Sum of all diagonals is " << sumOfDiagonal1 + sumOfDiagonal2 << endl;
}