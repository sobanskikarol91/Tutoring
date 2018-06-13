#include <iostream>
#include "MojeWyjatki.h"
#include "Tablica.h"

int main()
{
	const int rozmiar = 3;
	Tablica nasza_tablica(rozmiar);
	// odwolujemy sie do konkretnego elementu tablicy;

	nasza_tablica[0] = 4;
	cout << nasza_tablica[0] << endl;

	getchar();
}