#include "main.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, c = 0;
	int sum;
	char *con_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	sum = len1 + len2;
	con_str = malloc(1 + (sizeof(char) * sum));

	if (con_str == NULL)
	{
		return (NULL);
	}
	len2 = 0;

	while (c < sum)
	{
		if (c <= len1)
			con_str[c] = s1[c];
		if (c >= len1)
		{
			con_str[c] = s2[len2];
			len2++;
		}
		c++;
	}
	con_str[c] = '\0';
	return (con_str);
}
