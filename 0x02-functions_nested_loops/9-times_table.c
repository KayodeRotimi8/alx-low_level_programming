#include "main.h"

/**
 * times_table - function printing 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int loop_count1, loop_count2, product, Format_Digit1, Format_Digit2;

	loop_count1 = 0;
	while (loop_count1 <= 9)
	{
		loop_count2 = 0;
		while (loop_count2 <= 9)
		{
			product = loop_count1 * loop_count2;
			if (product > 9)
			{
				Format_Digit1 = product % 10;
				Format_Digit2 = (product - Format_Digit1) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(Format_Digit2 + '0');
				_putchar(Format_Digit1 + '0');
			}
			else
			{
				if (loop_count2 != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(product + '0');
			}
			loop_count2++;
		}
		_putchar('\n');
		loop_count1++;
	}
}
