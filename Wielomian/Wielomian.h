#pragma once
class Wielomian
{
	int stopien;
	int * wspolczynniki;

public:
	Wielomian(int nowy_stopien) : stopien(nowy_stopien)
	{
		stworz_dynamicznie_tablice();
	}

private:
	void stworz_dynamicznie_tablice()
	{
		wspolczynniki = new int[stopien];
	}

public:
	int Stopien()
	{
		return stopien;
	}

	void Ustaw(int wartosc_wspolczynika, int index_wspolczynnika)
	{
		// wartosc = 100, index = 3
		//    [1,0,100,400]
		//     a3,a2,a1,a0
		// to jest nie do konca ok
		wspolczynniki[stopien - index_wspolczynnika] = wartosc_wspolczynika;

	}
};
//    x^3 + x + 4; => 1*(x^3)  + 0*(x^2) + 1*(x^1) + 4* (x^0)    



