#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string pointer
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	else
		return (len);
}
