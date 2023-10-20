#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: postive, negative or 0
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	for (; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}

	return (0);
}
