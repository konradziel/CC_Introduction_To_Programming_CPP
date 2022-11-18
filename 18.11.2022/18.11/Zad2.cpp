#include <iostream>

using namespace std;

int main() {
	int parzyste[5] = { 2, 4, 6, 8, 10 };
	int x = sizeof(parzyste)/sizeof(int);
	cout << "Length of an array: " << x;

}