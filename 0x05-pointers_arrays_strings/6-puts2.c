#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: char pointer
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
	if ((i - 1) % 2 == 1)
	{
		for (j = 0 ; j < (i - 1) ; j++)
		{
			if (j % 2 == 0)
			{
				_putchar(str[j]);
			}
		}
	}
	if ((i - 1) % 2 == 0)
	{
		for (j = 0 ; j < i ; j++)
		{
			if (j % 2 == 0)
			{
				_putchar(str[j]);
			}
		}
	}
	_putchar('\n');
}
