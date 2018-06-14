#include <iostream>
#include "MojeWyjatki.h"
#include "Tablica.h"


void wypelnij(Tablica & tab, const int & size)
{
	for (size_t i = 0; i < size; i++)
		tab[i] = (i+1)*10;
}

void wypisz(Tablica & tab, const int & size)
{
	for (size_t i = 0; i < size; i++)
		cout << tab[i];
}

void dziel(Tablica & tab, const int & size)
{
		tab /= 2;
}

int main()
{
	const int rozmiar = 2;
	Tablica tablica(rozmiar);

	wypelnij(tablica, rozmiar);
	wypisz(tablica, rozmiar);
	wypelnij(tablica, rozmiar);
	dziel(tablica, rozmiar);
	wypisz(tablica, rozmiar);

	getchar();
}