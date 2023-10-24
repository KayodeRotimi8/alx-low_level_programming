#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string containing bytes to be scanned
 * @accept: string of bytes to match
 *
 * Return: Pointer to first matching byte if found, or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
				return (s);
			j++;
		}

		s++;
	}

	return ('\0');
}
