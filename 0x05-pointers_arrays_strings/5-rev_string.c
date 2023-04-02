#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: char pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	for (j = (i - 1) ; j <= i ; j--)
	{
		c = s[j];
		s[j] = s[(i - 1)];
		s[(i - 1)] = c;
	}
}
