#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: char pointer
 * Return: reversed string
 */

void rev_string(char *s)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	for (j = (i - 1) ; j <= i ; j--)
	{
		s[(i - 1)] = s[j];
	}
	return (s);
}
