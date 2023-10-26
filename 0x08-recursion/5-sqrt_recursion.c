#include "main.h"

int find_sqrt(int n, int nat_sqr_root);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number to calculate the natural square root
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - helper function to find the square root recursively
 *
 * @n: number whose sqaure root is to be found
 * @nat_sqr_root: iterator
 *
 * Return: the square root if found, or -1 if not found
 */

int find_sqrt(int n, int nat_sqr_root)
{
	if (nat_sqr_root * nat_sqr_root == n)
		return (nat_sqr_root);
	if (nat_sqr_root * nat_sqr_root > n)
		return (-1);
	return (find_sqrt(n, nat_sqr_root + 1));
}
