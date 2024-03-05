#include <iostream>

using namespace std;
 
int sumOfArray(int tab[], int size) {
	if (size <= 0)
	{
		return 0;
	}
	else
	{
		return tab[size - 1] + sumOfArray(tab, size - 1);
	}
}

void zamien(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void zamienPtr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int tab[5];
	int size = sizeof(tab) / sizeof(int);
	for (int i = 0; i < size; i++) {
		tab[i] = i;
		cout << tab[i] << " ";
	}
	cout << "\nSum of all elements is " << sumOfArray(tab, size);
	cout << "\n----------------" << endl;
	/*
	int *ptr = 0;
	int a = 10;
	*ptr = a;
	cout << *ptr;

	c. Error
	*/
	cout << "\n----------------" << endl;
	float f = 10.5;
	float p = 2.5;
	float* ptr = &f;
	(*ptr)++;
	*ptr = p;
	cout << *ptr << " " << f << " " << p;
	//c. 2.5 2.5 2.5
	cout << "\n----------------" << endl;
	int a = 4;
	int b = 3;
	zamien(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	cout << "\n----------------" << endl;
	zamienPtr(&a, &b);
	cout << "a = " << a << ", b = " << b << endl;

}