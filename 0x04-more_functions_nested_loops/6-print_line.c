#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n : the number of times the character _ should be printed
 * The line should end with a new line
 * If n is 0 prints a new line
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('95');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
