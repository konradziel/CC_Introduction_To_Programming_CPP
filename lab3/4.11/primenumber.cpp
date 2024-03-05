#include<iostream>

using namespace std;

int main() {
	int n;
	bool isPrime = true;
	cout << "Enter a number: " << endl;
	cin >> n;
	if (n <= 1) {
		cout << n << " is not a prime number." << endl;
	}
	else {
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0)
				isPrime = false;
		}
	}
	if (isPrime)
		cout << n << " is a prime numebr." << endl;
	else
		cout << n << " is not a prime number." << endl;
}