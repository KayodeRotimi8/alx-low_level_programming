#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(args, int));

		if (j < (n - 1) && separator)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
