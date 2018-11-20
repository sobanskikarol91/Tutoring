#include <stdio.h>
#include "Source.h"

void CheckMin(float * min, const  float * input)
{
	*min = *input < *min ? *input : *min;
}

void CheckMax(float *max, const float * input)
{
	*max = *input > *max ? *input : *max;
}

void Display(float *min, float *max, float *sum, float *avr)
{
	printf("Min: %f\n", *min);
	printf("Max: %f\n", *max);
	printf("Avr: %f\n", *avr);
	printf("Sum: %f\n", *sum);
}

void Sum(float *sum, const float *input)
{
	*sum += *input;
}

void Avr(float * avr, const float * numberAmount, const float * sum)
{
	*avr = *sum / *numberAmount;
}

int main()
{
	float min = 0, max = 0, sum = 0, avr = 0, input = 0, numberAmount = 0;

	while (1)
	{
		scanf_s("%f", &input);

		if (input != 0)
		{
			numberAmount++;

			if (numberAmount == 1)
			{
				min = input;
				max = input;
			}
			else
			{
				CheckMin(&min, &input);
				CheckMax(&max, &input);
			}

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