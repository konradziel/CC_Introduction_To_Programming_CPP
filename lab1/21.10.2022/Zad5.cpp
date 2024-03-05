#include <iostream>

using namespace std;

bool prime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main() {
	int n;
	cout << "Enter the number to check if it's a prime number " << endl;
	cin >> n;

	if (prime(n))
		cout << "Number " << n << "is a prime number" << endl;
	else
		cout << "Number " << n << "isn't a prime number" << endl;
	return(0);
}
