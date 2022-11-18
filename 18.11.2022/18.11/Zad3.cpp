#include <iostream>

using namespace std;

int main() {
	int c[20];
	int sum = 0;
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		c[i] = rand() % 101;
		sum += c[i];
	}
	cout << "Sum of those random numbers from 0 to 100 is: " << sum;
}