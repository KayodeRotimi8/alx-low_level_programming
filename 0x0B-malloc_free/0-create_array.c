#include "main.h"

/**
 * create_array - creates array of chars and initializes with specific char
 *
 * @size: array size
 * @c: char to assign to array
 *
 * Return: pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr_arr;
	unsigned int j;

	if (size == 0)
		return (NULL);

	ptr_arr = malloc(size * sizeof(char));

	if (ptr_arr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		ptr_arr[j] = c;

	return (ptr_arr);
}
