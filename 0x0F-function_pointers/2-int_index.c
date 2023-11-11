#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the comparism function
 *
 * Return:  index of the first element for which cmp function
 * does not return 0, -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}

	return (-1);
}
