#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int hour = 0, minute = 0;

	while (hour < 24)
	{
		while (minute < 60)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
			minute++;
		}
		minute = 0;
		hour++;
	}
}
