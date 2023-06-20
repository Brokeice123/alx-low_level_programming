#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *@n: number to test
 *Return: 1 if positive, 0 if zero, -1 if negative
 */


int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar ('+');
	}
	else if (n < 0)
	{
		return (-1);
		putchar ('-');
	}
	else
	{
		return (0);
		putchar ('0');
	}
}
