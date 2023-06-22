#include "main.h"

/**
 *print_numbers - Prints numbers from 0- 9
 *
 **/

void print_numbers(void)
{
	int n;
	char num_char;

	for (n = 0; n < 10; n++)
	{
		num_char = '0' + n;
		_putchar(num_char);
		_putchar(10);
	}
}
