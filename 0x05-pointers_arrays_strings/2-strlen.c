#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string of unknown length
 *
 * Return: str_len
 */

int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	return (str_len);
}
