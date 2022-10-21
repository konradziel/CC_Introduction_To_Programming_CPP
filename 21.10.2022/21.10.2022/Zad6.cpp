#include <iostream>

using namespace std;

int main() {
	int a;
	cout << "Enter even number ";
	cin >> a;
	if (a % 2 == 0)
		cout << "The number is a even number" << endl;
	else
		cout << "The number isn't a even number" << endl;
	return(0);
}