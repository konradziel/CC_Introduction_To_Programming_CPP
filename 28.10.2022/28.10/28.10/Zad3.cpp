#include<iostream>

using namespace std;

int main() {
	int hour;
	char str1[5] = "am";
	char str2[5] = "pm";
	char str3[5];
	int houra;
	int nhour;
	cout << "Enter the hour between 1 and 12" << endl;
	cin >> hour;
	if (hour >= 1 && hour < 12) {
		cout << "Is it am or pm?" << endl;
		cin >> sufix;
		
	}
	else {
		cout << "The hour is out from requested range" << endl;
	}
	return 0;
}
