#include <iostream>

using namespace std;

int main() {
	double x;
	double y;
	cout << "Enter the temperature in Celvins: " << endl;
	cin >> x;
	y = -272.15;
	cout << "Temperature in Celvins is " << x << endl;
	cout << "Temperature in Celsius is " << x+y << endl;
	
	return(0);
}