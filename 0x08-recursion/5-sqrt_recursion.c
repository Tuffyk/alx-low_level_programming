#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: computed number
 * If n does not have a natural square root, return -1
 * Return: natural square root of n
 *
 * _sqrt_check - Checks for the natural square root of the number
 * @n: computed number
 * @x: number used for checking
 * Return: natural square root of the number
 */

int _sqrt_recursion(int n)
{
	int x = 2;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_check(n, x));
	}
}

int _sqrt_check(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		x++;
		return (_sqrt_check(n , x));
	}
	else
	{
		return (-1);
	}
}
