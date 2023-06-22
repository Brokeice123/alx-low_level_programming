#include "main.h"

/**
 *more_numbers - prints 10 times the numbers from 0 - 14
 *
 **/

void more_numbers(void)
{
	int i = 0;
	int j;

	do {
		for (j = '0'; j <= '14'; j++)
			_putchar(j);
		_putchar('\n');
		i++;
	} while (i < 10)
}
