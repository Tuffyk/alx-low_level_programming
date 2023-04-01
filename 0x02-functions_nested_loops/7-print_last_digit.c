#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n : the number to be computed
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	return (last_digit);
}
