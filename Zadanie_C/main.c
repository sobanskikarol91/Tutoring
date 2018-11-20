#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
%c -dla znaków, czyli typu zmiennej char.
%s – dla ³añucha.
%d – dla liczb ca³kowitych, czyli dla zmiennych short int, long int.
%u – dla liczby bez znaku.
%f – dla liczby zmiennoprzecinkowych , czyli dla typów float, double.
*/

#define MAX 1000

// 4 9 0 1
void Min(const float * tablica, int rozmiar)
{
	float min = tablica[0];

	for (int i = 1; i < rozmiar; i++)
	{
		if (tablica[i] < min)
			min = tablica[i];
	}

	printf("Wartosc minimalna = %f", min);
}


void wyswietl(const float * tablica, int rozmiar)
{
	float suma = 0;
	 suma = Suma(tablica, rozmiar);
	//float srednia = Srednia(tablica, rozmiar);

	printf("SumaPoza: %f\n", suma);
	//printf("Srednia: %f", srednia);
}

float Suma(const float * tablica, int rozmiar)
{
	float suma = 0;

	for (size_t i = 0; i < rozmiar; i++)
		suma +=  tablica[i];

	printf("SumaWFunkcji: %f\n", suma);
	return suma;
}

float Srednia(const float * tablica, int rozmiar)
{
	float suma = Suma(tablica, rozmiar);
	return suma / rozmiar;
}

int main()
{
	float tablica[MAX];
	float wprowadzona;
	int index = 0;

	while (1)
	{
		scanf("%f", &wprowadzona);

		if (wprowadzona != 0)
		{
			tablica[index] = wprowadzona;
			index++;
		}
		else
			break;
	}

	//Suma(tablica, index);
	wyswietl(tablica, index);
	Min(tablica, index);

	printf("Wprowadz dane");
	system("pause");
	return 0;
}