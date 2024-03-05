#include <iostream>

using namespace std;

int zad1(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;		
	}
	return sum;
}

int ileZgodnych(int tablica1[], int tablica2[], int rozmiar) {
	int counter = 0;
	for (int i = 0; i < rozmiar; i++) {
		if (tablica1[i] != tablica2[i]) {
			continue;
		}
		else {
			counter++;
		}
	}
	return counter;
}

void ileZgodnychwypisanie(int tablica1[], int tablica2[], int rozmiar) {
	
	for (int i = 0; i < rozmiar; i++) {
		if (tablica1[i] != tablica2[i]) {
			continue;
		}
		else {
			cout << tablica1[i] << ", " << endl;
		}
	}
}

int main() {
	int number;
	cout << "Enter the number: " << endl;
	cin >> number;
	cout << zad1(number) << endl;
	cout << "\n----------" << endl;
	srand(time(NULL));
	int tablica1[5];
	int tablica2[5];
	int rozmiar = sizeof(tablica1) / sizeof(int);
	for (int i = 0; i < rozmiar; i++) {
		int n = rand() % 4;
		tablica1[i] = n;
	}
	for (int i = 0; i < rozmiar; i++) {
		int n = rand() % 4;
		tablica2[i] = n;
	}
	cout << "Ktore sa takie same: ";
	ileZgodnychwypisanie(tablica1, tablica2, rozmiar);
	cout << "Ilosc takich samych indeksow: " << ileZgodnych(tablica1, tablica2, rozmiar) << endl;
	
}