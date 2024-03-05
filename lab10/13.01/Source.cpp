#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> wektor) {
	for (int i = 0; i < wektor.size(); i++) {
		cout << wektor.at(i) << " ";
	}
}

int onlyPositive(vector<int> wektor) {
	int sum = 0;
	for (int i = 0; i < wektor.size(); i++) {
		if (wektor.at(i) >= 0) {
			sum += wektor.at(i);
		}
	}
	return sum;
}

vector<int> evenVector(vector<int> wektor) {
	vector<int> rwektor;
	for (int i = 0; i < wektor.size(); i++) {
		if (wektor.at(i) % 2 == 0) {
			rwektor.push_back(wektor.at(i));
		}
	}
	return rwektor;
}


int main() {
	vector<int> wektor = { -3, 4,5 };
	printVector(wektor);
	cout << "\n-----------" << endl;
	int sum = onlyPositive(wektor);
	cout << "Sum of only positive numbers: " << sum << endl;
	cout << "-----------" << endl;
	vector<int> wektor2 = {1 ,2 ,3 ,4 };
	printVector(evenVector(wektor2));
}