#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: printed string
 *
 * Return: half-string
 */

void puts_half(char *str)
{
	int iterate = 0;
	int count = 0;
	int second_half;

	while (str[iterate] != '\0')
	{
		count++;
		iterate++;
	}

	second_half = (count / 2);

	if ((count % 2) == 1)
	{
		second_half = ((count + 1) / 2);
	}

	iterate = second_half;

	while (str[iterate] != '\0')
	{
		_putchar(str[iterate]);
		iterate++;
	}

	_putchar('\n');
}
