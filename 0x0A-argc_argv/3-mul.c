#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int n = 0;
	int m = 0;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	result = n * m;

	printf("%d\n", result);
	return (0);
}
