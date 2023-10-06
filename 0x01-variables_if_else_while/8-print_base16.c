#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int sing_digit_low_case = 0;
	char doub_digit_low_case = 'a';

	while (sing_digit_low_case < 10)
	{
		putchar(sing_digit_low_case + '0');
		sing_digit_low_case++;
	}
	while (doub_digit_low_case <= 'f')
	{
		putchar(doub_digit_low_case);
		doub_digit_low_case++;
	}

	putchar('\n');
	return (0);
}
