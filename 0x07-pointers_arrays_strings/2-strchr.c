#include "main.h"

/**
 *_strchr - Locates a character in a string
 *@s: The String being used
 *@c: The character being located.
 *Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
