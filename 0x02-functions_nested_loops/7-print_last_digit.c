#include "main.h"

/**
 * print_last_digit - function prints last digit of a number
 *
 * @i: parameter
 *
 * Return: last_digit
 */

int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (i < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
