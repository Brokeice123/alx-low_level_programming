#include "main.h"

/**
 *print_binary - Prints the binary form of a number
 *@n: The number passed
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int j = 0;

	while (mask > 0)
	{
		if (n & mask)
			j = 1;

		if (j)
		{
			if (n & mask)
				_putchar('1');
			else
				_putchar('0');
		}

		mask >>= 1;
	}

	if (!j)
		_putchar('0');

}
