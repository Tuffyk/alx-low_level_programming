#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n : the number to be checked
 * Return : absolute value of the number or zero
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs;
		abs = n * -1;
		return (abs);
	}
	return (n);
}
