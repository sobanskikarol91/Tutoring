#include <stdio.h>



void transformacja(int liczba)
{
	int wynik = 0;

	do
	{
		wynik = liczba % 10;
		printf("Reszta: %d\n", &wynik);

		liczba /= 10;
	} while (liczba != 0);
}

int main()
{
	int wprowadzona = 0;
	suma(148);

	while (1)
	{
		printf("Wprowadz liczbe do konwersji");
		scanf_s("%d", &wprowadzona);

		if (wprowadzona == 0)
			break;
		else
			transformacja(wprowadzona);
	}

	return 0;
}