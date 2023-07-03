#include "main.h"

/**
 *_strstr - Locates a substring in a string
 *@haystack: The string being tested
 *@needle: The string being searched
 *Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			char *p = haystack;
			char *q = needle;

			while (*q && *p == *q)
			{
				p++;
				q++;
			}
			if (!*q)
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
