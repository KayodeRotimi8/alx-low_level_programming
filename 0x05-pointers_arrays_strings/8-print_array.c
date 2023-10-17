#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: pointer to array of integers
 * @n: number of elements in array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int iterator = 0;

	while (iterator < n)
	{
		printf("%d", a[iterator]);

		if (iterator != (n - 1))
		{
			printf(", ");
		}
		iterator++;
	}

	printf("\n");
}
