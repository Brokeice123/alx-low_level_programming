#include "main.h"

/**
* fibonacci_sequence - Prints the first 50 Fibonacci numbers
**/

void fibonacci_sequence(void)
{
	int times = 50;
	int first = 1;
	int second = 2;
	int next;
	int i = 2;

	printf("%d, %d", first, second);

	for (; i < times; i++)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");
}

