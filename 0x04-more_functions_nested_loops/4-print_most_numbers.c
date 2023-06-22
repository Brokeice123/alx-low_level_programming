#include "main.h"

/**
 *print_most_numbers - Prints numbers from 0- 9 except 2 and 4
 *
 **/

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		while (n != 2 || n != 4)
		{
			_putchar(n);
		}
	}
	_putchar(10);
}
