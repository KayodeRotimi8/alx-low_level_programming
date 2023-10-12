#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int p = 0;

		while (p < n)
		{
			int q = 0;

			while (q < p)
			{
				_putchar(32);
				q++;
			}
		_putchar(92);
		_putchar('\n');
		p++;
		}
	}
}
