#include "main.h"

/**
 * check_prime - check if the number is prime
 * @n: the number
 * @i: natural number for itteration
 * Return: (1) if number is prime, otherwise 0
 */

int check_prime(int n, int i)
{
	if (6 * i - 1 == n || 6 * i + 1 == n)
		return (1);
	else if (6 * i - 1 > n)
		return (0);
	else
		return (check_prime(n, i + 1));
}

/**
 * is_prime_number - check if the number is prime
 * @n: the numer
 * Return: (1) if numer is prime, otherwise (0)
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (check_prime(n, 1);
}
