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

	do {
		str_len++;
		s++;
	} while (*s != '\0');

	return (str_len);
}
