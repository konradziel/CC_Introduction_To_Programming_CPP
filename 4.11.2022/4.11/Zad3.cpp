#include<iostream>

using namespace std;

int main() {
	int n;
	int n1 = 0; //first number
	int n2 = 1; //second number
	int nn = 0; //next number
	cout << "Enter the number of numbers in the Fibonacci sequence to be displayed: " << endl;
	cin >> n;
	if (n < 0) {
		cout << "Number can't be negative." << endl;
	}
	else {
		cout << "Fibonacci sequence: ";
			for (int i = 1; i <= n; ++1) {
				if (i == 1) {
					cout << n1 << ", ";
					continue;
				}
				if (i == 2) {
					cout << n2 << ", ";
					continue;
				}
				nn = n1 + n2;
				n1 = n2;
				n2 = nn;
				if (i == n) {
					cout << nn;
					continue;
				}
				cout << nn << ", ";
		}
	}
}