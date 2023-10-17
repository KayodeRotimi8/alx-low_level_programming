#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 *
 * Return: reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int begin;
	int end;
	char reverse;

	while (s[len] != '\0')
	{
		len++;
	}

	begin = 0;
	end = len - 1;
	while (begin < end)
	{
		reverse = s[begin];
		s[begin] = s[end];
		s[end] = reverse;

		begin++;
		end--;
	}
}

