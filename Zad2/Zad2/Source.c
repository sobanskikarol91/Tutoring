#include <stdio.h>
#include <conio.h>  
#include <ctype.h>
void licz_samogloski()
{
	int ilosc=0;
	while (1)
	{
		char l = _getche();
		l = toupper(l);

		if (l == 'A')
			ilosc++;
		if (l == 'Q')
			break;
	}

	printf("Ilosc: %d", ilosc);
}

int main()
{
	licz_samogloski();

	system("pause");
	return 0;
}