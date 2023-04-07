#include "main.h"

/**
 * is_prime_number - Checks if a number is prime number
 * @n: number to check
 * Return: 1 if given number is prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int i = 0;

	if (n == 2)
	{
		return (1);
	}
	else if (n < 2 || n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime_number(n, i));
	}
}

/**
 * check_prime_number - Checks if the number is prime
 * @n: number to check
 * @i: itterative number
 * Return: 1 if the number is prime number, otherwise 0
 */

int check_prime_number(int n, int i)
{
	if (6 * i + 1 < n)
	{
		i++;
		check_prime_number(n, i);
	}
	else if (6 * i + 1 == n || 6 * i - 1 == n)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
