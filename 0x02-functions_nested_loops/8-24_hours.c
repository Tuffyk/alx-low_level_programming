#include "main.h"

/**
 * jack_bauer - Prints every minute of the day starting from 00:00 to 23:59
 * Return: 0
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0 ; hours <= 23 ; hours++)
	{
		for (minutes = 0 ; minutes <= 59 ; minutes++)
		{
			if (hours == 0)
			{
				_putchar('0' + hours);
				_putchar('0' + hours);
				_putchar(':');
			}
			else if (minutes == 0)
			{
				_putchar('0' + minutes);
				_putchar('0' + minutes);
				_putchar('\n');
			else
			{
				_putchar('0' + hours);
				_putchar(':');
				_putchar('0' + minutes);
				_putchar('\n');
			}
		}
	}
}
