#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * The diagonal should end with a new line
 * If n is 0 or less prints a new line
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;
	
	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar(92);
			_putchar('\n');
			
			if (i < (n - 1))
			{
				for (j = 0 ; j <= i ; j++)
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
