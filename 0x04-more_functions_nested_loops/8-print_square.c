#include "main.h"

/**
 * print_square - Prints a square followed by a new line
 * using the character '#' to print the square
 * @size : is the size of the square
 * If size is 0 or less prints a new line
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
