#include "main.h"

/**
 * print_square - prints a square
 * @size: number of squares
 * Return: empty
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a = 0;

		while (a < size)
		{
			int b = 0;

			while (b < size)
			{
				_putchar(35);
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
