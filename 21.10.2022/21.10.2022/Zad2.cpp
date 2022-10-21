#include <iostream>

using namespace std;

int main() {
	int a = 12;
	int b = 15;
	cout << "Values before swap: " << a << " and " << b << endl;
	
	int temp = a;
	a = b;
	b = temp;
	cout << "Values after swap: " << a << " and " << b << endl;
}