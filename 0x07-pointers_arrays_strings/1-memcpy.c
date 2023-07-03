#include "main.h"

/**
 *_memcpy - Copies memory Area
 *@dest: Destination
 *@src: Source
 *@n: Number of Bytes
 *Return: dets(Destination)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = scr[r];
		n--;
	}

	return (dest);
}
