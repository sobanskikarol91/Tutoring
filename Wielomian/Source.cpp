#include <iostream>
#include "Wielomian.h"
using namespace std;

/* */


int main()
{
	try
	{
		Wielomian w(2);
		cout << w << endl;

		w.Ustaw(7, 2);
		w.Ustaw(9, 1);
		w.Ustaw(5, 0);

		//cout << w << endl;
		//cout << w.wartosc(2) << endl;
	}
	catch (const std::exception& wyjatek)
	{
		cout << wyjatek.what();
	}

	getchar();
	return 0;
}

