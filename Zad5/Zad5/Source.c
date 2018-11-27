#include <stdio.h>

int transformacja(int liczba)
{
	// liczba = 123
	int wynik = 0;
	int ilosc_cyfr = pobierz_ilosc_cyfr(liczba);
	int mnoznik = 1;
	int cyfra = 0;
	int i = 0;

	for (i = 0; i < liczba != 0; i++)
	{
		cyfra = liczba % 10;
		liczba /= 10;

		if (cyfra > 5) cyfra--;
		else if (cyfra < 5) cyfra++;

		wynik += cyfra * mnoznik;
		mnoznik *= 10;
	}

	return wynik;
}

int main()
{
	int wprowadzona = 123;
	transformacja(wprowadzona);

	while (1)
	{
		printf("Wprowadz liczbe do konwersji: \n");
		scanf_s("%d", &wprowadzona);

		if (wprowadzona == 0)
			break;
		else  
		{
			int wynik = transformacja(wprowadzona);
			printf("%d", wynik);
		}
	}

	return 0;
}