#include "main.h"

int check_palindrome(char *st, char *e);
int _strlen(char *s);

/**
 * is_palindrome - function that checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (!*s)
		return (1);

	return (check_palindrome(s, s + _strlen(s) - 1));
}

/**
 * check_palindrome - helper function to check if a string is a palindrome
 *
 * @st: start of the string
 * @e: end of the string
 *
 * Return: 1 if a palindrome, 0 if not
 */

int check_palindrome(char *st, char *e)
{
	if (st >= e)
		return (1);

	if (*st != *e)
		return (0);

	return (check_palindrome(st + 1, e - 1));
}

/**
 * _strlen - function to find the length of a string
 *
 * @s: string length to be found
 *
 * Return: string length
 */

int _strlen(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen(s + 1));
}
