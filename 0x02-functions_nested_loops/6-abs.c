#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n : the number to be checked
 * Return : 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs;
		
		abs = n * -1;
		return (abs);
	}
	else
	{
		return (n);
	}

	return (0);
}
