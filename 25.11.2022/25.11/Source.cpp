#include<iostream>

using namespace std;

int zad1(int argument[], int size) {
    int  result = 0;
    for (int i = 0; i < size; i++) {
        result += argument[i];
    }
    return result;
}

int zad2(int argument[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        if (argument[i] % 2 == 0 && argument[i] != 0) {
            result++;
        }
    }
    return result;
}

int zad3(int argument[], int size) {
    int max = argument[0];
    for (int i = 0; i < size; i++) {
        if (argument[i] > max) {
            max = argument[i];
        }
    }
    return max;
}

void zad4(int argument1[], int argument2[], int argument3[], int size) {
    cout << "\nIndex numbers where at least two arrays have the same value: " << endl;
    for (int i = 0; i < size; i++) {
            if (argument1[i] == argument2[i] || argument1[i] == argument3[i] || argument2[i] == argument3[i]) {
                cout << i << " ";
            }
        }
    cout << "\nIndex numbers where three arrays have the same value: " << endl;
    for (int i = 0; i < size; i++) {
        if (argument1[i] == argument2[i] && argument2[i] == argument3[i]) {
            cout << i << " ";
        }
    }
    cout << "\nIndex numbers where no array has the same value.: " << endl;
    for (int i = 0; i < size; i++) {
        if (argument1[i] != argument2[i] && argument2[i] != argument3[i] && argument1[i] != argument3[i]) {
            cout << i << " ";
        }
    }
}

int zad5a(string argument) {
    int n = argument.length();
    int amounta = 0;
    for (int i = 0; i < n; i++) {
        if (argument[i] >= 'a' && argument[i] <= 'z')
            amounta++;
    }
    return amounta;
}

int zad5b(string argument) {
    int n = argument.length();
    int amountb = 0;
    for (int i = 0; i < n; i++) {
        if (!(argument[i] >= 'a' && argument[i] <= 'z') && ! (argument[i] >= 'A' && argument[i] <= 'Z'))
            amountb++;
    }
    return amountb;
}


int main() {
    int tablica[20];
    int tablica1[20];
    int tablica2[20];
    int tablica3[20];
    int size;
    size = sizeof(tablica) / sizeof(int);
    srand(time(NULL));
    cout << "tablica glowna: ";
    for (int i = 0; i < size; i++) {
        tablica[i] = rand() % 101;
        cout << tablica[i] << " ";
    }
    cout << "\n------------" << endl;
    cout << "tablica 1: ";
    for (int i = 0; i < size; i++) {
        tablica1[i] = rand() % 4;
        cout << tablica1[i] << " ";        
    }
    cout << "\n------------" << endl;
    cout << "tablica 2: ";
    for (int i = 0; i < size; i++) {
        tablica2[i] = rand() % 4;
        cout << tablica2[i] << " ";
    }
    cout << "\n------------" << endl;
    cout << "tablica 3: ";
    for (int i = 0; i < size; i++) {
        tablica3[i] = rand() % 4;
        cout << tablica3[i] << " ";
    }

    cout << "\n------------" << endl;
    cout << "\nZadania tablica glowna: " << endl;
    int sum = zad1(tablica, size);
    cout << "Sum:" << sum << endl;
    cout << "------------" << endl;
    int even = zad2(tablica, size);
    cout << "Amount of even numbers; " << even << endl;
    cout << "------------" << endl;
    int maxv = zad3(tablica, size);
    cout << "Max: " << maxv << endl;

    cout << "------------" << endl;
    cout << "\nZadania tablice 1, 2, 3: " << endl;
    zad4(tablica1, tablica2, tablica3, size);

    string str;    
    cout << "\n------------" << endl;
    cout << "\nZadanie 5 " << endl;
    cout << "\nEnter any string of characters" << endl;
    cin >> str;
    int amounta = zad5a(str);
    int amountb = zad5b(str);
    cout << "Amount of lowercase letters: " << amounta << endl;
    cout << "Amount of characters that are not Latin letters: " << amountb << endl;
}
