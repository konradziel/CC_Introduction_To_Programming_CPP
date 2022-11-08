#include<iostream>

using namespace std;

int main() {
	for (int n=0; n <= 50; n = (n + 2)) {
		cout << n << ", ";
	}
	int n = 50;
	while(n<=98) {
		n = (n + 2);
		if (n < 100) {
			cout << n << ", ";
		}
		else {
			cout << n << endl;
		}
	}
}