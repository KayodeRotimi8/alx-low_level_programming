#include "main.h"

/**
 * _strdup - pointer to new string which is a duplicate of string
 *
 * @str: string to duplicate input
 *
 * Return: duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int len, j;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= len; j++)
	{
		dup[j] = str[j];
	}

	return (dup);
}
