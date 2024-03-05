#include<iostream>

using namespace std;

int main() {
	int n;
	long long factorial = 1;
	cout << "Enter the number you want to count factorial of: " << endl;
	cin >> n;
	if (n < 0) {
		cout << "Number can't be negative." << endl;
	}
	else {
		for (int i = 1; i <= n; ++i) {
			factorial *= i;
		}
		cout << "Factorial of " << n << " = " << factorial << endl;
	}
}