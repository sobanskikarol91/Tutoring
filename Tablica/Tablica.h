#pragma once
#include <iostream>
#include "MojeWyjatki.h"
using namespace std;

// lista 
class Tablica
{
	int rozmiar;

public:
	int * tablica_liczb; // dynamicznie tworzona tablica w zaleznosci od podanego rozmiaru uzytkownika
	Tablica() {}
	Tablica(int rozmiar_do_sprawdzenia)
	{
		try
		{
			czy_blady_rozmiar(rozmiar_do_sprawdzenia);
		}
		catch (const std::exception & wyjatek)
		{
			cout << wyjatek.what();
		}
	}

	~Tablica()
	{
		if(rozmiar > 0)
		delete[] tablica_liczb;
	}

	void czy_blady_rozmiar(int rozmiar_do_sprawdzenia)
	{
		if (rozmiar_do_sprawdzenia < 1 || rozmiar_do_sprawdzenia > 1000)
			throw NiewlasciwaAlokacja();
		else
		{
			// jezeli rozmiar jest poprawny to zapamietujemy jaki jest to rozmiar
			rozmiar = rozmiar_do_sprawdzenia;
			// i tworzymy dynamicznie tablice
			dynamiczna_alokacja();
		}
	}

	void czy_bledne_odwolanie_do_elementu_tablicy(int element)
	{
		if (element < 0 || element >= rozmiar)
			throw PozaZasiegiem();
	}

	void dynamiczna_alokacja()
	{
		tablica_liczb = new int[rozmiar];
	}

	int & operator[] (int index_tablicy)
	{
		if (index_tablicy < 0 || index_tablicy >= rozmiar)
			throw PozaZasiegiem();

		return tablica_liczb[index_tablicy];
	}

	Tablica & operator/=(int dzielnik)
	{
		cout << "Op dzielenia";
		for (size_t i = 0; i < rozmiar; i++)
		{
			tablica_liczb[i] /= dzielnik;
		}
		return *this;
	}
};