#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: string destination
 * @src: string source
 * @n: number of bytes copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	for (; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}
