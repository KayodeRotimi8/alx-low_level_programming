#include "main.h"

/**
 * print_alphabet_x10 - function printing alphabets in lowercase 10times
 *
 * Return: always 0;
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10 ; n++)
	{
		char low_alpha = 'a';

		while (low_alpha <= 'z')
		{
			putchar(low_alpha);
			low_alpha++;
		}
		putchar('\n');
	}

}
