#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * do not print 2 and 4
 *
 * Return: numbers
 */

void print_most_numbers(void)
{
	int m_num = 0;

	while (m_num <= 9)
	{
		if (m_num != 2 && m_num != 4)
		{
			putchar(m_num + '0');
		}
		m_num++;
	}

	putchar('\n');
}
