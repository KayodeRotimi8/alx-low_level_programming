#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 *
 * @str: printed string
 *
 * Return: print
 */

void puts2(char *str)
{
	int count = 0;
	int counter = 0;
	char *pointa = str;
	int iter;

	while (*pointa != '\0')
	{
		pointa++;
		count++;
	}
	counter = count - 1;

	iter = 0;
	while (iter <= counter)
	{
		if (iter % 2 == 0)
		{
			_putchar(str[iter]);
		}
		iter++;
	}

	_putchar('\n');
}
