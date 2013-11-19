/*********************************************************************
Tehtävä: HARJOITUS 20
Tekijä: Pekka Melgin
PVM: 19.11.2013
Kuvaus:
Kuten harjoitus 19, mutta toteuta kayttaen taulukkoa ja osoitinta
tiedon käsittelyyn
*********************************************************************/
#include <iostream>
using namespace std;
int main() {
	int nopeus[5] = {0,0,0,0,0};
	cout << "Kovaako ajetaan?\n";
	for (int ind = 0; nopeus[ind] == 0; ind++) {
		int *osoitin = &nopeus[ind]; //täältä löytyy
		cin >> *osoitin;
		if (nopeus[ind] < 0) {
			cout << "Ja sen pituinen se\n";
			break;
		}
		cout << "Keskinopeus on " << (nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4]) / 5 << "km/h\n";
	}
	while (nopeus[4] > 0) {
		int *osoitin = &nopeus[4]; //ja täältä
		nopeus[0] = nopeus[1];
		nopeus[1] = nopeus[2];
		nopeus[2] = nopeus[3];
		nopeus[3] = nopeus[4];
		cin >> *osoitin;
		if (nopeus[4] < 0) {
			cout << "Ja sen pituinen se\n";
			break;
		}
		cout << "Keskinopeus on " << (nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4]) / 5 << "km/h\n";
	}
}