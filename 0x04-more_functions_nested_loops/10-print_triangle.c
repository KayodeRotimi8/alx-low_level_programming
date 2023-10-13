#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (space = size - row; space > 1; space--)
			{
				_putchar(32);
			}
			for (hash = 0; hash <= row; hash++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
