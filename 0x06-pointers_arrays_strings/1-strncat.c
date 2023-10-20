#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * use at most n bytes from src
 *
 * @dest: string appended to
 * @src: string to appended
 * @n: number of bytes to append from src
 *
 * Return: pointer to resulting string, dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a++])
	{
		b++;
	}

	for (a = 0; src[a] && a < n; a++)
	{
		dest[b++] = src[a];
	}

	return (dest);
}
