#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int sing_digit_numbers = 0;
	int two_digit_numbers = 1;

	while (sing_digit_numbers < 10)
	{
		while (two_digit_numbers < 10)
		{
			if (sing_digit_numbers != two_digit_numbers)
			{
				putchar(sing_digit_numbers + '0');
				putchar(two_digit_numbers + '0');

				if (sing_digit_numbers != 8 && two_digit_numbers != 10)
				{
					putchar(',');
					putchar(' ');
				}
			}
			two_digit_numbers++;
		}
		sing_digit_numbers++;
		two_digit_numbers = sing_digit_numbers + 1;
	}

	putchar('\n');
	return (0);
}
