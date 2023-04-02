#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: char pointer
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
	if ((i - 1) % 2 == 0)
	{
		for (j = 0 ; j <= (i - 1) ; j++)
		{
			if (j >= (i - 1) / 2)
			{
				_putchar(str[j]);
			}
		}
	}
	if ((i - 1) % 2 == 1)
	{
		for (j = 0; j < (i - 1) ; j++)
		{
			if (j > (i - 1) / 2)
			{
				_putchar(str[j]);
			}
		}
	}
	_putchar('\n');
}
