#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n : the number to be checked
 * Prints + if n is greater than zero
 * Prints 0 if n is zero
 * Prints - if n is less than zero
 * 
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
