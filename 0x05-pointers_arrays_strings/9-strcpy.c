#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: copy destination of string
 * @src: copy source of string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int tracker;
	char *hold;

	hold = dest;

	for (tracker = 0; src[tracker] != '\0'; tracker++)
	{
		dest[tracker] = src[tracker];
	}
	dest[tracker++] = '\0';

	return (hold);
}
