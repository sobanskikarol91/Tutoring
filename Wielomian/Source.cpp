#include <iostream>
#include "Wielomian.h"
using namespace std;


void wypelnij_tablice(int tab[], int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
	{
		tab[i] = ( rozmiar -i-1);
	}

}

void wypisz_tablice(int tab[], int rozmiar)
{
	cout << "[ ";
	for (size_t i = 0; i < rozmiar; i++)
		cout <<  "a" << tab[i] << ", ";

	cout << "] ";

}

void wyswietl_podany_element_od_konca(int index, int tab[], int rozmiar)
{
	cout << "Element: ";
	//cout << tab[index];
	cout << tab[rozmiar - 1 - index];
}

int main()
{
	const int rozmiar = 5;
	int tab[rozmiar];

	wypelnij_tablice(tab, rozmiar);
	wypisz_tablice(tab, rozmiar);
	wyswietl_podany_element_od_konca(1, tab, rozmiar);

	getchar();
	return 0;
}

