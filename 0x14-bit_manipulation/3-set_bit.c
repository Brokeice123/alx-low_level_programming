#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index.
 *@n: Pointer to the variable holding the given number
 *@index: Index of the specific bit to be changed
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= 64)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (0);
}
