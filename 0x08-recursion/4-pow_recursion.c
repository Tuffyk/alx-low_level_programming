#include "main.h"

/**
 * _pow_recursion - Return the value of x raised to the power of y
 * @x: the computed number
 * @y: the exponent
 * if y is lower than 0 return -1
 * Return: The value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		--y;
		return (x * _pow_recursion(x, y));
	}
}
