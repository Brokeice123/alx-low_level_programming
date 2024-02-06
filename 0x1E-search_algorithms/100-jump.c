#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int step, prev, curr, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;
	curr = step;

	while (array[curr] < value && curr < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, curr);

	for (i = prev; i <= curr && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
