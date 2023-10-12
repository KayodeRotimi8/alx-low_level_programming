#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: result
 */

void more_numbers(void)
{
	int iterate_1;
	int iterate_2;

	for (iterate_1 = 0; iterate_1 <= 9; iterate_1++)
	{
		for (iterate_2 = 0; iterate_2 < 15; iterate_2++)
		{
			if (iterate_2 >= 10)
			{
				_putchar((iterate_2 / 10) + '0');
			}
			_putchar((iterate_2 % 10) + '0');
		}
		_putchar('\n');
	}
}
