#include <stdio.h>


void Obliczanie(float * suma, float * srednia, float * min, float * max, float wprowadzona, float ilosc)
{
	*suma += wprowadzona;
	*srednia += *suma / ilosc;

	if (ilosc == 1)
	{
		*min = wprowadzona;
		*max = wprowadzona;
	}

	if (wprowadzona > *max)
		*max = wprowadzona;

	if (wprowadzona < *min)
		*min = wprowadzona;
}


void Wprowadzanie_liczb()
{
	float wprowadzona = 0;
	float suma = 0, srednia = 0, min = 0, max = 0;
	int ilosc = 0;

	while (1)
	{
		printf("Wprowadz liczbe: ");
		scanf_s("%f", &wprowadzona);

		if (wprowadzona != 0)
		{
			ilosc++;
			Obliczanie(&suma, &srednia, &min, &max, wprowadzona, ilosc);
		}
		else
			break;
	}

	printf("Suma: %f\n", suma);
	printf("Srednia: %f\n", srednia);
	printf("Min: %f\n", min);
	printf("Max: %f\n", max);
}

int main()
{
	Wprowadzanie_liczb();
	system("pause");
	return 0;
}