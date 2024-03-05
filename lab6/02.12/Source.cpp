#include <iostream>

using namespace std;

int secondToMax(int argument[], int size) {
    int max;
    int smax;
    if (argument[1] > argument[0]) {
        max = argument[1];
        smax = argument[0];
    }
    else {
        max = argument[0];
        smax = argument[1];
    }
   
    for (int i = 2; i < size; i++) {
        if (max < argument[i]) {
            smax = max; 
            max = argument[i];  
        }
        else if (argument[i] > smax && argument[i] < max) {
            smax = argument[i];
        }
    }

return smax;
}

string reversedText(string ust) {
    string reversed = ust;
    for (int i = 0; i < ust.length(); i++) {
        reversed[i] = ust[ust.length() - 1 - i];
    }
    return reversed;    
}

int gcd(int n1,int n2) {
    int GCD = 0;
    int temp;
    if (n1 < 0) {
        n1 = -n1;
    }
    else if (n2 < 0) {
        n2 = -n2;
    }

    if (n2 > n1) {
        temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for (int i = 1; i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            GCD = i;
        }
    }
return GCD;
}



void randomNumbersa() {
    int count5 = 0;
    int count1 = 0;
    int result = 0;
    srand(time(NULL));
    while (count5 < 3 or count1 < 2) {
        result = rand()%11-5;
        if (result == 5) {
            count5++;
            cout << result << " ";
        }
        else if (result == 1) {
            count1++;
            cout << result << " ";
        }
    }
}

void randomNumbersb() {
    int count5 = 0;
    int count1 = 0;
    int result = 0;
    srand(time(NULL));
    while (count5 < 3 or count1 < 2) {
        result = rand() % 11 - 5;
        if (result == 5) {
            if (count5 == 3) {
                continue;
            }
            else {
                count5++;
                cout << result << " ";
            }
        }
        else if (result == 1) {
            if (count1 == 2) {
                continue;
            }
            else {
                count1++;
                cout << result << " ";
            }
        }
    }
}


int main() {
	int tablica[20];
    int size = sizeof(tablica) / sizeof(int);
    srand(time(NULL));
    cout << "tablica: ";
    for (int i = 0; i < size; i++) {
        tablica[i] = rand() % 101;
        cout << tablica[i] << " ";
    }
    cout << "\n-----------" << endl;
    int smax = secondToMax(tablica, size);
    cout << smax;
    cout << "\n-----------" << endl;
    string ust;
    cout << "Enter the text: " << endl;
    cin >> ust;
    cout << reversedText(ust);
    cout << "\n-----------" << endl;
    int n1;
    int n2;
    cout << "Enter two numbers you want to check the greatest common divisor: " << endl;
    cin >> n1 >> n2;
    cout << "The greatest common divisor of " << n1 << " and " << n2 << " is " << gcd(n1, n2) << endl;
    cout << "\n-----------" << endl;
    randomNumbersa();
    cout << "\n-----------" << endl;
    randomNumbersb();
}