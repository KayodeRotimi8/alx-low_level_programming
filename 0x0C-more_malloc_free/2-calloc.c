#include "main.h"

/**
 * *_calloc - function that allocates memory for an array
 * using malloc
 *
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *char_ptr;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	char_ptr = ptr;
	for (j = 0; j < nmemb * size; j++)
	{
		char_ptr[j] = 0;
	}

	return (ptr);
}
