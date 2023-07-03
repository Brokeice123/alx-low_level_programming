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
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(src + i) = *(dest + i);
	}

	return (dest);
}
