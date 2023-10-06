#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int single_digit_num = 0;

	while (single_digit_num < 10)
	{
		putchar(single_digit_num + '0');
		single_digit_num++;
	}

	putchar('\n');
	return (0);
}
