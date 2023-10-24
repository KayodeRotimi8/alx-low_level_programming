#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string to be scanned
 * @needle: substring be searched with-in haystack string
 *
 * Return: Pointer to beginning of substring if found, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *j;
	char *k;

	while (*haystack != '\0')
	{
		j = haystack;
		k = needle;

		while (*j == *k && *k != '\0')
		{
			j++;
			k++;
		}

		if (*k == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
