#include "main.h"

/**
 * main - Fizz-Buzz test
 *
 * Return: void
 */

int main(void)
{
	int multiples = 1;

	while (multiples <= 100)
	{
		if (multiples % 3 == 0 && multiples % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (multiples % 3 == 0)
		{
			printf("Fizz");
		}
		else if (multiples % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", multiples);
		}
		if (multiples != 100)
		{
			printf(" ");
		}
		multiples++;
	}
	printf("\n");
	return (0);
}
