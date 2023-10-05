#include "main.h"

/**
 * _guess_sqrt - return the natural square root of a nuber
 * @n: then number
 * @square: used to check the square root
 * Return: the square root of a number on success,
 * -1 otherwise
 */

int _guess_sqrt(int n, int square)
{
	if ((square * square) > n)
		return (-1);
	if ((square * square) == n)
		return (square);
	else
		return (_guess_sqrt(n, square++));
}

/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: the number
 * Return: the natural square root, otherwise (-1)
 */

int _sqrt_recursion(int n)
{
	int square;

	square = 1;
	if (n < 0)
		return (-1);
	return (_guess_sqrt(n, square));
}
