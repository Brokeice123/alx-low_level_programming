#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10x followed by newline
 *
 *
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int n;

	for (n = 0; n <= 10; n++)
	{
		for (; i <= 122; i++)
		{
			putchar(i);
		}

		putchar('\n');

	}
}
