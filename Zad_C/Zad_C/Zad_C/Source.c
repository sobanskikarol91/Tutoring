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

inline void Avr(float * avr, const int * counter, const float * sum)
{
	*avr = *sum / *counter;
}

inline void CheckMinMaxState(float *min, float *max, int *counter, const float * input)
{
	if (*counter == 1)
	{
		*min = *input;
		*max = *input;
	}
	else
	{
		CheckMin(min, input);
		CheckMax(max, input);
	}
}

void Calculate(float *min, float *max, float *sum, float *avr, const float * input)
{
	static int counter = 1;

	CheckMinMaxState(min, max, &counter, input);
	Sum(sum, input);
	Avr(avr, &counter, sum);
	counter++;
}

void ReadInput(float *min, float *max, float *sum, float *avr)
{
	float input = 0;

	while (1)
	{
		scanf_s("%f", &input);

		if (input != 0)
			Calculate(min, max, sum, avr, &input);
		else break;
	}
}

int main()
{
	float min = 0, max = 0, sum = 0, avr = 0;

	ReadInput(&min, &max, &sum, &avr);
	Display(&min, &max, &sum, &avr);
	system("pause");
	return 0;
}