/*Harjoitus 11 (Palautus vko 43)
Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
seuraavalta:

VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista käsitellä
useita lukupareja käyttäjän toiveiden
mukaisesti. Mita tapahtuu, jos luku2 on 0?*/
#include <iostream>
using namespace std;
int main(void)
{
	int luku1, luku2;
	cout << "Anna luku ";
	cin >> luku1;
	cout << "Anna luku ";
	cin >> luku2;
	int valinta;
	do
	{
		cout << "VALIKKO";
		cout << "\n1Summa";
		cout << "\n2Erotus";
		cout << "\n3Tulo";
		cout << "\n4Osamäärä";
		cout << "\n5Jakojäännös";
		cout << "\n6Laske uusilla luvuilla" << endl;
		cout << "Valintasi: ";
		cin >> ws >> valinta;
		switch (valinta)
		{
		case 1: cout << "\nLukujen summa on " << luku1 + luku2;
			break;
		case 2: cout << "\nLukujen erotus on " << luku1 - luku2;
			break;
		case 3: cout << "\nLukujen tulo on " << luku1*luku2;
			break;
		case 4: cout << "\nLukujen osamaara on " << (float)luku1 / luku2;
			break;
		case 5: cout << "\nJakojaannos on " << luku1%luku2;
			break;
		case 6: cout << "Anna luku ";
			cin >> luku1;
			cout << "Anna luku ";
			cin >> luku2;
		}
	

	} while (valinta != 0);
	
	return 0;



}