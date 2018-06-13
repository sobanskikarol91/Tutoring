#pragma once
#include <iostream>
#include "MojeWyjatki.h"
using namespace std;

// lista 
class Tablica
{
	int rozmiar;
	int * tablica_liczb; // dynamicznie tworzona tablica w zaleznosci od podanego rozmiaru uzytkownika

public:
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

	void dynamiczna_alokacja()
	{
		tablica_liczb = new int[rozmiar];
	}

	int & operator[] (int index_tablicy)
	{
		try
		{
			
		}
		catch (const std::exception&)
		{

		}
		cout << "Dla indexu tablicy: " << index_tablicy;
		cout << " Zwracamy adres: " << &tablica_liczb[index_tablicy];
		cout << " z wartoscia: " << tablica_liczb[index_tablicy] << endl;
		return tablica_liczb[index_tablicy];
	}

};