#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: string destination
 * @src: string source
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int z;

	while (dest[a] != '\0')
	{
		a++;
	}
	z = 0;

	while (src[z] != '\0')
	{
		dest[a] = src[z];
		a++;
		z++;
	}

	dest[a] = '\0';

	return (dest);
}
