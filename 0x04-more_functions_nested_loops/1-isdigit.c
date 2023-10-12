#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: number to be checked
 *
 * Return: 1 if a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	return (0);
}
