#include "main.h"

/**
 * _isdigit - Check for a digit
 * @c: the character to be checked
 * Return: 1 if the character is a digit, 0 otherwise
 */

int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
