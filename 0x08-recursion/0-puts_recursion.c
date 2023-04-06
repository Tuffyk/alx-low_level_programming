#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: String pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;

	if (*s != '\0')
	{
		_puts_recursion(s[i]);
	}
}
