#include<iostream>

using namespace std;

int main() {
	int pprice;
	int sprice;
	int num;
	cout << "Enter the price of product then selling price to check the income." << endl;
	cin >> pprice >> sprice;
	if (pprice > 0 and sprice > 0 and pprice <= sprice ) {
		num = sprice - pprice;
		if (num > 0) {
			cout << "The income is " << num << endl;
		}
		else {
			cout << "The loss is " << -num << endl;
		}
	}
	else {
		cout << "One of the numbers is either negative or price of product is smaller than selling price";
	}
	return 0;
}
