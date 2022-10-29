#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int hour;
	string str1("am");
	string str2("pm");
	string str3;
	int houra; //hours ahead
	int nhour; //new hour
	cout << "Enter the hour between 1 and 12:" << endl;
	cin >> hour;
	if (hour >= 1 && hour < 12) {
		cout << "Is it am or pm?" << endl;
		cin >> str3;
		std::transform(str3.begin(), str3.end(), str3.begin(), ::tolower); 
		/* Funkcja transform zamienia wszystkie znaki jakie wpiszemy na ma³e litery
		 * aby nie by³o trzeba dodawaæ wiêkszej iloœci string'ów w których zawarte
		 * by³by inne mo¿liwoœci które u¿ytkownik móg³by wpisaæ, czyli w tym przypadku
		 * u¿ywaj¹ce du¿ych liter, w takiej sytuacji sam wyraz by siê zgadza³ jednak 
		 * program wykonuj¹c polecenie compare uwa¿a³ by to za niepoprawn¹ wartoœæ, 
		 * poniewa¿ porównuje do wyrazu który jest napisany tylko i wy³¹cznie ma³ymi literami.
		 */
		int com = str3.compare(str1);
		int com1 = str3.compare(str2);
			if(com == 0 || com1 == 0) {
				cout << "How many hours ahead do you want to go from " << hour << " " << str3 << "." << endl;
				cin >> houra;
				//zmiana b¹dŸ zostawienie am/pm
				if (houra > 0) {
					nhour = hour + houra;
					if (nhour <= 12) {
						cout << "New hour is " << nhour << " " << str3 << "." << endl;
					}
					else {
						int div; //przetrzymuje informacje ile razy trzeba przejœæ miêdzy am i pm
						int rest; //przetrzymuje informacje ile godzin po 12
						rest = nhour % 12;
						div = nhour / 12;
						//informacje o nowej godzinie
						nhour = rest; //nowa godzina
						if (div % 2 == 0) {
							cout << "New hour is " << nhour << " " << str3 << "." << endl;
						}
						else {
							if (com == 0) {
								str3 = str2;
								cout << "New hour is " << nhour << " " << str3 << "." << endl;
							}
							else {
								str3 = str1;
								cout << "New hour is " << nhour << " " << str3 << "." << endl;
							}
						}
					}
				}
				else {
					cout << "Given value can't be negative." << endl;
				}
			}
			else {
				cout << "You have to give am or pm." << endl;
			}
		
	}
	else {
		cout << "The hour is out from requested range." << endl;
	}
	return 0;
}
