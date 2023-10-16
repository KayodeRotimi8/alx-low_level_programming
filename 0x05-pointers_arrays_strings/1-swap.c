#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first pointer to integer
 * @b: second pointer to integer
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
