#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 *
 * @str: string to be changed
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int rev = 0;

	for (; str[rev] != '\0'; rev++)
	{
		if (str[rev] >= 'a' && str[rev] <= 'z')
		{
			str[rev] -= 32;
		}
	}

	return (str);
}
