#include <iostream>
#include <cstdlib>

using namespace std;

void problem1();
void problem2();

int main()
{
  string variant;
  cout << "Enter number of the problem (1 or 2): ";

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
  const int arrSize = 12;

  int arr[arrSize]{};

  srand(time(NULL));

  for (int i = 0; i < arrSize; i++) {
		arr[i] = rand() % 100;
	}

  cout << "Array: ";
  for (int i = 0; i < arrSize; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  cout << "Sorted array in ascending order: ";

  for (int i = 0; i < arrSize; i++) {
    for (int j = 0; j < arrSize - 1; j++) {
      if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

  for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Sorted array in descending order: ";

  for (int i = 0; i < arrSize; i++) {
    for (int j = 0; j < arrSize - 1; j++) {
      if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

  for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void problem2() {
  const int arrSize = 12;

  int arr[arrSize]{};

  srand(time(NULL));

  for (int i = 0; i < arrSize; i++) {
    arr[i] = rand() % 200 - 100;
  }

  cout << "Array: ";
  for (int i = 0; i < arrSize; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  int max = arr[0];
  int maxIndex = 0;

  for (int i = 0; i < arrSize; i++) {
    if (arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
	}

  for (int i = 0; i < maxIndex; i++) {
    if (arr[i] < 0) {
			arr[i] = 0;
		}
  }

  cout << "Chnaged negativies to 0: ";
  for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

