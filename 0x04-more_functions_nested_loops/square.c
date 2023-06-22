#include "main.h"

/**
 *square - prints a square
 *
 * @n: The number of stars
 *
 **/

void square(int n)
{
	int row;
	int column;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			_putchar(42);
			_putchar(32);
		}
		_putchar(10);
	}
}
