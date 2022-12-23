#include <iostream>

using namespace std;

int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else if (n < 0) {
		cout << "You've entered negative number.";
		return 0;
	}
	else {
		return n * factorial(n - 1);
	}
}

int elementCiag(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n < 0) {
		cout << "You've entered negative number.";
		return 0;
	}
	else {
		return (-n) * elementCiag(n - 1) + 4;
	}
}

int Fibonacci(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n == 0) {
		return 0;
	}
	else if (n < 0) {
		cout << "You've entered negative number.";
		return 0;
	}
	else {
		return Fibonacci(n-1)+Fibonacci(n-2);
	}
}



int main() {
	int n;
	int result;
	cout << "Enter the number you want to take factorial of: " << endl;
	cin >> n;
    result = factorial(n);
	cout << result;
	cout << "\n---------------" << endl;
	int n1;
	int result1;
	cout << "Enter the number: " << endl;
	cin >> n1;
	result1 = elementCiag(n1);
	cout << result1;
	cout << "\n---------------" << endl;
	int n2;
	int result2;
	cout << "Enter the number: " << endl;
	cin >> n2;
	result2 = Fibonacci(n2);
	cout << result2;


}