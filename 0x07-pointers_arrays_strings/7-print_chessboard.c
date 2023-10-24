#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: pointer to a 2D array representing the chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int j = 0;
	int k;

	while (j < 8)
	{
		k = 0;

		while (k < 8)
		{
			_putchar(a[j][k]);
			k++;
		}
		_putchar('\n');
		j++;
	}
}
