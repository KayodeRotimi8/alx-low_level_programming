#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 *
 * @s: pointer to the string to be converted
 *
 * Return: the integer converted from the string
 */

int _atoi(char *s)
{
	int j = 0;
	unsigned int mor = 0;
	int k = 1;
	int a = 0;

	while (s[j])
	{
		if (s[j] == 45)
		{
			k *= -1;
		}

		while (s[j] >= 48 && s[j] <= 57)
		{
			a = 1;
			mor = (mor * 10) + (s[j] - '0');
			j++;
		}

		if (a == 1)
		{
			break;
		}

		j++;
	}

	mor *= k;

	return (mor);
}
