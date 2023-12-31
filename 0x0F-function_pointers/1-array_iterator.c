#include "function_pointers.h"

/**
 *  array_iterator - function that executes a function given as a
 *  parameter on each element of an array
 *
 *  @array: pointer to array
 *  @size: size of the array
 *  @action: pointer to the function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array != NULL && action != NULL)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}
