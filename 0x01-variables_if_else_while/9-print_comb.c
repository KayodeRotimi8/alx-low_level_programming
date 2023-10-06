#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int single_digit_numbers = 0;

	while (single_digit_numbers < 10)
	{
		putchar(single_digit_numbers + '0');
		if (single_digit_numbers != 9)
		{
			putchar(',');
			putchar(' ');
		}
		single_digit_numbers++;
	}

	putchar('\n');
	return (0);
}
