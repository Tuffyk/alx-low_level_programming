#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: the computed number
 * If n is lower than 0 the function should return -1
 * Factorial of 0 is 1
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
