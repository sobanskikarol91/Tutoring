#include <stdio.h>
#include "Source.h"

typedef struct MyStruct
{
	float min;
	float max;
	float sum;
	float avr;
}Result;

inline void CheckMin(float *min, const float *input)
{
	*min = *input < *min ? *input : *min;
}

inline void CheckMax(float *max, const float *input)
{
	*max = *input > *max ? *input : *max;
}

inline void Display(const Result * res)
{
	printf("Min: %f\n", res->min);
	printf("Max: %f\n", res->max);
	printf("Avr: %f\n", res->avr);
	printf("Sum: %f\n", res->sum);
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

void Calculate(Result * res, const float * input)
{
	static int counter = 1;

	CheckMinMaxState(&res->min, &res->max, &counter, input);
	Sum(&res->sum, input);
	Avr(&res->avr, &counter, &res->sum);
	counter++;
}

inline void ReadInput(Result * res)
{
	float input = 0;

	while (1)
	{
		scanf_s("%f", &input);

		if (input != 0)
			Calculate(res, &input);
		else break;
	}
}

int main()
{
	Result res = {0,0,0,0};

	ReadInput(&res);
	Display(&res);

	system("pause");
	return 0;
}