#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to flip
 *@n: The previous number
 *@m: The desired number
 *
 *Return: the number of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
