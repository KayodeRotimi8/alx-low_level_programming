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
		printf("%d", single_digit_num);
		single_digit_num++;
	}

	printf("\n");
	return (0);
}
