#include <iostream>
#include "Wielomian.h"
using namespace std;

/* */
int main()
{
	try
	{
		Wielomian w(2);
		w.Wprowadz();
			

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


