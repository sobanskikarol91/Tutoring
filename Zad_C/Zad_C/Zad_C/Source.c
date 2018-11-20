#include <stdio.h>
#include "Source.h"

inline void CheckMin(float *min, const float *input)
{
	*min = *input < *min ? *input : *min;
}

inline void CheckMax(float *max, const float *input)
{
	*max = *input > *max ? *input : *max;
}

inline void Display(const float *min, const float *max, const float *sum, const float *avr)
{
	printf("Min: %f\n", *min);
	printf("Max: %f\n", *max);
	printf("Avr: %f\n", *avr);
	printf("Sum: %f\n", *sum);
}

inline void Sum(float *sum, const float *input)
{
	*sum += *input;
}

inline void Avr(float * avr, const int * numberAmount, const float * sum)
{
	*avr = *sum / *numberAmount;
}

inline void CheckMinMaxState(float *min, float *max, const int *numberAmount, const float * input)
{
	if (*numberAmount == 1)
	{
		*min = *input;
		*max = *input;
		printf("Min: %f\n", *min);
		printf("Max: %f\n", *max);
	}
	else
	{
		CheckMin(min, input);
		CheckMax(max, input);
	}
}

int main()
{
	float min = 0, max = 0, sum = 0, avr = 0, input = 0;
	int numberAmount = 0;

	while (1)
	{
		scanf_s("%f", &input);

		if (input != 0)
		{
			numberAmount++;
			CheckMinMaxState(&min, &max, &numberAmount, &input);
			Sum(&sum, &input);
			Avr(&avr, &numberAmount, &sum);
		}
		else
			break;
	}

	Display(&min, &max, &sum, &avr);
	system("pause");
	return 0;
}