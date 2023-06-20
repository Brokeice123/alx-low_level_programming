#include <stdio.h>

/**
 * main - Uses function print_alphabet
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet - Prints alphabet in lowercase
 */

int main(void)
{
	print_alphabet();
	return (0);
}


void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
