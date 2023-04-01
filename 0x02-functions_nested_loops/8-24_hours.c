#include "main.h"

/**
 * jack_bauer - Prints every minute of the day starting from 00:00 to 23:59
 * Return: 0
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0 ; h1 <= 2 ; h1++)
	{
		for (h2 = 0 ; h2 <= 9 ; h2++)
		{
			if (h1 <= 1 && h2 <= 9 || h1 <= 2 && h2 <= 3)
			{
				for (m1 = 0 ; m1 <= 5 ; m1++)
				{
					for (m2 = 0 ; m2 <= 9 ; m2++)
					{
						_putchar('0' + h1);
						_putchar('0' + h2);
						_putchar(':');
						_putchar('0' + m1);
						_putchar('0' + m2);
						_putchar('\n');
					}
				}
			}
		}
	}
}

