#include "main.h"

/**
 * _islower - Checks for lowercase character
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
	return (1);
	}
	
	return (0);
}
