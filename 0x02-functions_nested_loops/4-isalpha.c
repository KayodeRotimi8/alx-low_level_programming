#include "main.h"

/**
 * _isalpha - function that checks for alphabetic characters
 *
 * @c: parameter to be checked
 *
 * Return: 1 if an letter, and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
