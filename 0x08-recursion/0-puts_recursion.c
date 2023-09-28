#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - prints a string
 * followed by a new line
 * @s: String pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (0);
	if (s != '\0')
	{
		_putchar(s + i);
		i++;
		_puts_recursion(s + i);
	}
}
