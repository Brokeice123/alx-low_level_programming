#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: The number to set the bit from
 * @index: The index of the bit to set
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
