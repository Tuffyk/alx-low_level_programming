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
		_putchar('0');

		for (j = 1 ; j <= 9 ; j++)
		{
			_putchar(',');
			_putchar(' ');

			m = i * j;

			_putchar('0' + m);

			if (m <= 9)
			{
				_putchar(' ');
			}
			else
			{
				t = m / 10;
				o = m % 10;

				_putchar('0' + t);
				_putchar('0' + o);
			}
			_putchar('\n');
		}
	}
}		
