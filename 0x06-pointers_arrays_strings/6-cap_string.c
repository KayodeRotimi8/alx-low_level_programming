#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: string to be capitalized
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int cap = 0;

	for (; str[cap] != '\0'; cap++)
	{
		if (str[cap] >= 'a' && str[cap] <= 'z')
		{
			if (str[cap - 1] == ' ' ||
					str[cap - 1] == '\t' ||
					str[cap - 1] == '\n' ||
					str[cap - 1] == ',' ||
					str[cap - 1] == ';' ||
					str[cap - 1] == '.' ||
					str[cap - 1] == '!' ||
					str[cap - 1] == '?' ||
					str[cap - 1] == '"' ||
					str[cap - 1] == '(' ||
					str[cap - 1] == ')' ||
					str[cap - 1] == '{' ||
					str[cap - 1] == '}' ||
					cap == 0)
			{
				str[cap] -= 32;
			}
		}
	}

	return (str);
}
