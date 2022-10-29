#include<iostream>

using namespace std;

int main() {
	int pprice;
	int sprice;
	int num;
	cout << "Enter the price of product then selling price to check the income." << endl;
	cin >> pprice >> sprice;
	if (pprice > 0 and sprice > 0) {
		num = sprice - pprice;
		if (num > 0) {
			cout << "The income is " << num << endl;
		}
		else {
			if (pprice > sprice) {
				cout << "The loss is " << -num << endl;
			}
			else {
				cout << "There is no income or loss." << endl;
			}
		}
	}
	else {
		cout << "One of the numbers is negative.";
	}
	return 0;
}
