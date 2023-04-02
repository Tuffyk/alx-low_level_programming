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
	for (j = -1 ; j < (i - 1) ; j++)
	{
		_putchar(str[(j + 1)]);
	}
	_putchar('\n');
}
