#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @n: encoded string
 *
 * Return: n
 */

char *leet(char *n)
{
	int y = 0;
	int z;

	char nid_rep[] = "aAeEoOtTlL";
	char rep_wit[] = "4433007711";


	while (n[y] != '\0')
	{
		z = 0;

		while (z < 10)
		{
			if (n[y] == nid_rep[z])
			{
				n[y] = rep_wit[z];
				break;
			}
			z++;
		}
		y++;
	}

	return (n);
}
