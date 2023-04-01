#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 * Return: 0
 */

void times_table(void)
{
	int m;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			m = i * j;

			_putchar('0' + m);
			
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
