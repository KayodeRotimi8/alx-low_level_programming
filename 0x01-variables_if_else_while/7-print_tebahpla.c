#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char low_alpha = 'z';

	while (low_alpha >= 'a')
	{
		putchar(low_alpha);
		low_alpha--;
	}

	putchar('\n');
	return (0);
}
