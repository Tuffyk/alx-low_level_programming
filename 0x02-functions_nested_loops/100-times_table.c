#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The n times table
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j, m, tens, ones;

	if (n > 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				m = i * j;

				if (m > 9)
				{
					tens = m / 10;
					ones = m % 10;

					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + tens);
					_putchar('0' + ones);
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
