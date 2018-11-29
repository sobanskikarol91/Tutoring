//a  e  i o  u y

#include <stdio.h>
#include <conio.h>  
#include <ctype.h>


void zlicz_samogloski()
{
	char litera = NULL;
	int ilosc = 0;

	printf("\n Podaj litere: ");

	while (litera != 'q')
	{
		litera = _getche();
		litera = tolower(litera);

		if (litera == 'a' || litera == 'e' || litera == 'i' || litera == 'o' || litera == 'u' || litera == 'y')
			ilosc++;
	}

	printf("\n Liczba samoglosek: %d\ns", ilosc);
	printf("-----------------------------------");
}

int main()
{
	while (1)
		zlicz_samogloski();

	system("pause");
	return 0;
}