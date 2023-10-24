#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer to the block of memory to fill
 * @b: constant byte to fill memory with
 * @n: number of bytes of the memory area pointed to
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}

	return (s);
}
