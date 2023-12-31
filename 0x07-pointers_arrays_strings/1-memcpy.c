#include "main.h"

/**
 *_memcpy - function that copies memory area
 *
 *@dest: memory area copied to
 *@src: memory area copied from
 *@n: number of bytes copied
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
