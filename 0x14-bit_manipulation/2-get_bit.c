#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to get the bit from
 * @index: The index of the bit to get
 * Return: The value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
