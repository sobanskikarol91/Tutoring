#pragma once
#include "Wielomian.h"

class WielomianWeWy : public Wielomian
{
public:

	void wprowadz()
	{
		int index, wartosc;
		cout << "Wybierz index wspolczynnika: ", cin >> index;
		cout << "Wybierz wartosc wspoczynnika: ", cin >> wartosc;
		Ustaw(index, wartosc);
	}
};

