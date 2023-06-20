#include "main.h"

/**
* fibonacci_sequence - Prints the first 50 Fibonacci numbers
*@50: The value entered
* main - Executes the fibonacci_sequence function.
**/

void fibonacci_sequence(n = 50)
{
	int first = 1;
	int second = 2;
	int next;
	int i = 2;

	printf("%d, %d", first, second);

	for (; i < n; i++)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");
}

