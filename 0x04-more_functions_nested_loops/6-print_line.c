#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n:  number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int value;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		value = 0;
		while (value < n)
		{
			_putchar(95);
			value++;
		}
		_putchar('\n');
	}
}
