#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: String pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	_putchar(s[]);
	++i;

	if (*s != '\0')
	{
		_puts_recursion(*s);
	}
}
