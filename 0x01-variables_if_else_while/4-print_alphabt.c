#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char low_alpha = 'a';

	while (low_alpha <= 'z')
	{
		if (low_alpha != 'e' && low_alpha != 'q')
		{
			putchar(low_alpha);
		}
		low_alpha++;
	}

	putchar('\n');
	return (0);
}
