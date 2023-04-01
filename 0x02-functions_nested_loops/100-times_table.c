#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The n times table
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j, m, h, t, o;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				m = i * j;

				if (m > 99)
				{
					h = m / 100;
					t = m / 10;
					o = m % 10;

					_putchar(',');
					_putchar(' ');
					_putchar('0' + h);
					_putchar('0' + t);
					_putchar('0' + o);
				}
				else if (m > 9)
				{
					t = m / 10;
					o = m % 10;

					_putchar(',');
					_putchar(' ');
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
						_putchar(' ');
					}
					_putchar('0' + m);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
