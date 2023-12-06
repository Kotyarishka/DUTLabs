#include <iostream>
#include <cstdlib>

using namespace std;

void problem1();
void problem2();
void problem3();
void problem4();

int main()
{
  string variant;
  cout << "Enter number of the problem (1, 2, 3 or 4): ";

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
  else {
		cout << "Wrong number of the problem" << endl;
	}

}

void problem1() {
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
  int min = arr[0];

  int maxIndex = 0;
  int minIndex = 0;

  for (int i = 0; i < arrSize; i++) {
    if (arr[i] > max) {
      max = arr[i];
      maxIndex = i;
    }

    if (arr[i] < min) {
      min = arr[i];
      minIndex = i;
    }
  }

  int temp = arr[maxIndex];
  arr[maxIndex] = arr[minIndex];
  arr[minIndex] = temp;

  cout << "Array after swapping: ";
  for (int i = 0; i < arrSize; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

}

void problem2() {
  int a;

  cout << "Enter A: ";
  cin >> a;

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

  int elementsGreaterThanA = 0;

  for (int i = 0; i < arrSize; i++) {
    if (arr[i] > a) {
			elementsGreaterThanA++;
		}
	}

  cout << "Elements greater than A: " << elementsGreaterThanA << endl;
}

void problem3() {
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

  // remove max element from array
  remove(arr, arr + arrSize, max);

  max = arr[0];
  
  for (int i = 0; i < arrSize - 1; i++) {
    if (arr[i] > max) {
			max = arr[i];
		}
  }

  cout << "Second max element: " << max << endl;
}

void problem4() {
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

  int zeroIndex = 0;
  bool zeroFound = false;
  for (int i = 0; i < arrSize; i++) {
    if (arr[i] == 0) {
			zeroIndex = i;
			zeroFound = true;
			break;
		}
	}
	
  if (zeroFound) {
		cout << "Zero index: " << zeroIndex << endl;
	}
  else {
		cout << "Zero not found" << endl;
	}
}