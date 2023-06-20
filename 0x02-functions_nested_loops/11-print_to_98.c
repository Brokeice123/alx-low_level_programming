#include "main.h"

/**
 *print_to_98 - Prints all natural numbers from n to 98
*
*@n: The number being used
**/

void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		for (i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ")
			}
		}
	}
	else
	{
		for (i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ")
			}
		}
	}

	printf("\n");
}
