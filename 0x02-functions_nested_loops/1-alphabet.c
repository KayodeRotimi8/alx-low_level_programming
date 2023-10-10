#include "main.h"

/**
 * print_alphabet - function that prints alphabets in lowercase
 *
 * Return: always 0;
 */

void print_alphabet(void)
{
	char low_alpha = 'a';

	while (low_alpha <= 'z')
	{
		putchar(low_alpha);
		low_alpha++;
	}

	putchar('\n');
}
