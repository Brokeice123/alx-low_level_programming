#include "main.h"
#include <stdlib.h>

/**
 *array_range - Creates an array of integers
 *@min: The min
 *@max: The max
 *Return: A pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
		array[i] = min + i;

	return (array);
}
