#include<iostream>

using namespace std;

int main() {
	int num;
	cout << "Enter a percentage (0-100) to check if you've passed." << endl;
	cin >> num;
	if (num < 0 || num >100) {
		cout << "Wrong number.";
	}
	else {
		if (num < 50) {
			cout << "You've failed the exam.";
		}
		else {
			cout << "You've passed the exam.";
		}
	}
}