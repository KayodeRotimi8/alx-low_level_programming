#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: input
 * @size: input
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int mat;

	while (mat < size)
	{
		s1 += a[mat * size + mat];
		mat++;
	}

	mat = size - 1;

	while (mat >= 0)
	{
		s2 += a[mat * size + (size - mat - 1)];
		mat--;
	}

	printf("%d, %d\n", s1, s2);
}
