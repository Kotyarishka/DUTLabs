#include <iostream>
#include <string>

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

struct Time {
  int hours;
  int minutes;
};

void problem1() {
  Time time{};

  int minutesToAdd = 0;

  cout << "Enter hours: ";
  cin >> time.hours;

  cout << "Enter minutes: ";
  cin >> time.minutes;

  cout << "Enter minutes to add: ";
  cin >> minutesToAdd;

  if (time.hours > 24 || time.hours < 0) {
    cout << "Wrong hours, must be between 0 and 24" << endl;
    return;
  }

  if (time.minutes > 60 || time.minutes < 0) {
		cout << "Wrong minutes, must be between 0 and 60" << endl;
    return;
	}

	time.minutes += minutesToAdd;

  if (time.minutes > 60) {
		time.hours += time.minutes / 60;
		time.minutes %= 60;
	}

  if (time.hours > 24) {
		time.hours %= 24;
	}

  string minutes = to_string(time.minutes);

  if (time.minutes < 10) {
		minutes = "0" + minutes;
		return;
	}

	cout << "Time: " << time.hours << ":" << minutes << endl;
}

void problem2() {
  Time startTime{};
  Time endTime{};

  cout << "Enter start time hours: ";
  cin >> startTime.hours;

  cout << "Enter start time minutes: ";
  cin >> startTime.minutes;

  cout << "Enter end time hours: ";
  cin >> endTime.hours;

  cout << "Enter end time minutes: ";
  cin >> endTime.minutes;

  if (startTime.hours > 24 || startTime.hours < 0) {
		cout << "Wrong start time hours, must be between 0 and 24" << endl;
		return;
	}

  if (startTime.minutes > 60 || startTime.minutes < 0) {
		cout << "Wrong start time minutes, must be between 0 and 60" << endl;
		return;
	}

  if (endTime.hours > 24 || endTime.hours < 0) {
		cout << "Wrong end time hours, must be between 0 and 24" << endl;
		return;
	}

  if (endTime.minutes > 60 || endTime.minutes < 0) {
		cout << "Wrong end time minutes, must be between 0 and 60" << endl;
		return;
	}

	int hours = endTime.hours - startTime.hours;
	int minutes = endTime.minutes - startTime.minutes;


  if (minutes < 0) {
		hours--;
		minutes += 60;
	}

  if (hours < 0) {
    cout << "Wrong time, end time must be after start time" << endl;
    return;
  }

  string strMinutes = to_string(time.minutes);

  if (time.minutes < 10) {
    strMinutes = "0" + minutes;
    return;
  }

	cout << "Time: " << hours << ":" << strMinutes << endl;
}

