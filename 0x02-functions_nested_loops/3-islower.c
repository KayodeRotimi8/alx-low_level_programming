#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: parameter to be printed
 *
 * Return: 1 if lowercase, and 0 if otherwise
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}