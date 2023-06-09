#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 * Return: 0
 */

void times_table(void)
{
	int i, j, m, t, o;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			m = i * j;

			if (m > 9)
			{
				t = m / 10;
				o = m % 10;

				_putchar(',');
				_putchar(' ');
				_putchar('0' + t);
				_putchar('0' + o);
			}
			else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + m);
			}
		}
		_putchar('\n');
	}
}
