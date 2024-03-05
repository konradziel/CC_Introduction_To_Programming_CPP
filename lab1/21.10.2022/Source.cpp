#include <iostream>

using namespace std;

/*float x = 5, 23f;
  int a = 0;
  char b = 's';
 */
 
int main() {
	int a;
	int b;
	cout << "Please, insert onlye positive values:" << endl;
	cin >> a >> b;
	if (a < 0 or b < 0) {
		cout << "At least one number is negative value! Try again!" << endl;
	}
	else {
		int c = a + b;
		cout << "The sum of inserted values is: " << c;
	}
}
