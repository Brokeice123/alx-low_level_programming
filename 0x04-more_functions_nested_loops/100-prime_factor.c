#include <stdio.h>

/**
 *main = finds and prints the largest prime number
 *
 *Return: 0 when successfull
 **/

int main(void)
{
	long int num = 612852475143, divisor = 4;

	while (divisor < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}

		for (divisor = 3; divisor < (num / 2); divisor += 2)
		{
			if ((num % divisor) == 0)
				num /= divisor;
		}
	}

	printf("%ld\n", num);

	return (0);
}
