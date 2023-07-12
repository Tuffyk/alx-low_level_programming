#include "main.h"

/**
 * _puts_recursion - Prints a String followed by a new line
 * @s: String pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s == "NULL")
		return;
	if (s != "\0")
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
