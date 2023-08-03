#include "main.h"

/**
 *binary_to_uint- Converts a binary number to an unsigned int
 *@b: Pointer to a string of 1 and 0 chars
 *
 *Return: The converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
