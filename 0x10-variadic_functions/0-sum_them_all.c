#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number of paramters
 * @...: variable number of paramters
 *
 * Return: 0 if n == 0, otherwise sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (j = 0; j < n; j++)
		sum += va_arg(args, int);

	va_end(sac);

	return (sum);
}
