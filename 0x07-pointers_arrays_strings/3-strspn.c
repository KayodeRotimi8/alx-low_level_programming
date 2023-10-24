#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to be scanned
 * @accept: string containing the list of characters to match in, s
 *
 * Return: Number of bytes in initial segment that
 * consist of characters in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int k;

	while (*s)
	{
		k = 0;

		while (accept[k])
		{
			if (*s == accept[k])
			{
				j++;
				break;
			}
			else if (accept[k + 1] == '\0')
			{
				return (j);
			}

			k++;
		}

		s++;
	}

	return (j);
}
