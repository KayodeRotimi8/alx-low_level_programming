#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be scanned
 * @c: character to be searched for in s
 *
 * Return: Pointer to first occurrence of c, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] >= '\0')
	{
		if (s[j] == c)
			return (s + j);
		j++;
	}

	return (0);
}
