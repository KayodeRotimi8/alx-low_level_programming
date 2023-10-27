#include "main.h"

int recursive_prime(int n, int div);

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number, otherwise return 0
 *
 * @n: number to check
 *
 * Return: 1 if prime number, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (recursive_prime(n, 2));
}

/**
 * recursive_prime - calculates if a number is prime recursively
 *
 * @n: number to check
 * @div: divisor for check
 *
 * Return: 1 if prime, 0 if otherwise
 */

int recursive_prime(int n, int div)
{
	if (div * div > n)
		return (1);

	if (n % div == 0)
		return (0);

	return (recursive_prime(n, div + 1));
}
