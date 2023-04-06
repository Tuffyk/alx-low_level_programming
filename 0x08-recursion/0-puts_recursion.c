#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: String pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;
	char c;


	if (s[i] != '\0')
	{
		c = s[i];
		_putchar(c);
		i++;
		_puts_recursion((s + i));
	}
	else
	{
		_putchar('\n');
	}
}
