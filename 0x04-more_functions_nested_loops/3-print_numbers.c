#include "main.h"

/**
 * print_numbers - unction that prints the numbers, from 0 to 9
 *
 * Return: numbers 0 to 9
 */

void print_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
