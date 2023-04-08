#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The n times table
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else if (n >= 0 && n <= 15)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				/**
				*if ((i * j) > 99)
				*{
				*	_putchar(',');
				*	_putchar(' ');
				*	_putchar('0' + ((i * j) / 100));
				*	_putchar('0' + (((i * j) / 10)) % 10);
				*	_putchar('0' + ((i * j) % 10));
				*}
				*else
				*/	if (j > 0)
					{
						_putchar(',');
						_putchar(' ');
						if ((i * j) > 99)
						{
							_putchar('0' + ((i * j) / 100));
							_putchar('0' + (((i * j) / 10)) % 10);
							_putchar('0' + ((i * j) % 10));
						}
						else if ((i * j) > 9)
						{
							_putchar(' ');
							_putchar('0' + ((i * j) / 10));
							_putchar('0' + (i * j) % 10);
						}
						else
						{
							_putchar(' ');
							_putchar('0' + (i * j));
						}
					}
					else
					{
						_putchar('0');
					}	
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
