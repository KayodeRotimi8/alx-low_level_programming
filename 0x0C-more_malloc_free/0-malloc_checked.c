#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: the number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pontr;

	pontr = malloc(b);

	if (pontr == NULL)
	{
		exit(98);
	}

	return (pontr);
}
