#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c : the character to be checked
 *
 * Return: 1 if c is a letter lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		if (c >= 97 && c <= 120)
		{
			return (1);
		}
	}
	return (0);
}
