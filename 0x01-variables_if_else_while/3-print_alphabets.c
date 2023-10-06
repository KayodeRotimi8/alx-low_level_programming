#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char low_alpha = 'a';
	char upp_alpha = 'A';

	while (low_alpha <= 'z')
	{
		putchar(low_alpha);
		low_alpha++;
	}
	while (upp_alpha <= 'Z')
	{
		putchar(upp_alpha);
		upp_alpha++;
	}

	putchar('\n');
	return (0);
}
