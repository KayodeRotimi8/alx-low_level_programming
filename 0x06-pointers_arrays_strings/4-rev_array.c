#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b = 0;
	int c;

	while (b < n--)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
		b++;
	}
}
