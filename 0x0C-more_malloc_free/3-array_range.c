#include "main.h"

/**
 * *array_range - function creates an array of integers from min to max
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array
 * or NULL if min > max or if malloc fails
 */

int *array_range(int min, int max)
{
	int *array, j, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (j = 0; min <= max; j++)
	{
		array[j] = min++;
	}

	return (array);
}
