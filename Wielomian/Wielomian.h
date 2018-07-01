#pragma once

#include <iostream>
#include <math.h>
using namespace std;

class Wielomian
{
	int stopien;
	int * wspolczynniki;

public:
	 Wielomian(int nowy_stopien) : stopien(nowy_stopien) // 3 stopien
	{
		stworz_dynamicznie_tablice();
		wypelnij_wspolczynniki_zerami();
	}
	// stopien = 2; // elementow 3
	//                                     
private:
	inline void stworz_dynamicznie_tablice()
	{
		wspolczynniki = new int[stopien + 1];   // 4 [0,1,2,3]
	}

public:
	inline int Stopien()
	{
		return stopien;
	}

	// 4 [0,1,2,3]
	void Ustaw(const int & wartosc_wspolczynika,const int index_wspolczynnika)
	{
		wspolczynniki[index_wspolczynnika] = wartosc_wspolczynika;

		// 6*x ^ 3  7*x ^ 2 + 9 * x ^ 1 + 2 * x ^ 0
		// 2*x ^ 3  9*x ^ 2 + 7 * x ^ 1 + 6 * x ^ 0
		// 4 [0,1,2,3]

	}

	friend ostream & operator<<(ostream & ekran, Wielomian & w)
	{
		for (size_t i = 0; i <= w.Stopien(); i++)
		{

			if (w.wspolczynniki[i] != 1)
				ekran << w.wspolczynniki[i];
			else if (i < w.Stopien() - 1)
				ekran << w.wspolczynniki[i];

			// dla kazdego oprocz ostatniego wspolczynnika
			if (i < w.Stopien())
			{
				ekran << "x";

				// w przypadku gdy nie jest to przedostatni
				if (i < w.Stopien() - 1) cout << "^" << w.Stopien() - i;

				ekran << " + ";
			}
		} // koniec for
		return ekran;
	}

	int Wspolczynniki(int index)
	{
		return wspolczynniki[index];
	}

	int wartosc(int x)
	{
		int y = 0; // wynik wielomianu

		for (size_t i = 0; i <= stopien; i++) // 0,1,2,3
		{
			int aktualny_stopien = stopien - i; // 3,2,1,0
			y += wspolczynniki[i] * pow(x, aktualny_stopien);
		}

		return y;
	}

private:
	void wypelnij_wspolczynniki_zerami()
	{
		for (size_t i = 0; i <= stopien; i++)
			wspolczynniki[i] = 0;
	}
};
//   1*(x^3)  + 0*(x^2) + 1*(x^1) + 4* (x^0)    



