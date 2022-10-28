#include<iostream>

using namespace std;

int main() {
	int year;
	cout << "Enter the year" << endl;
	cin >> year;
	if (year >= 0) {
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			cout << "The year is leap" << endl;
		}
		else {
			cout << "The year isn't leap" << endl;
		}
	}
	else {
		cout << "Year can't be a negative value" << endl;
	}
}