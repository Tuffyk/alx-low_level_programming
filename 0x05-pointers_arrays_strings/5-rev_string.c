#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: char pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, k;
	char c;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	k = i - 1;
	for (j = (i - 1) ; j <= i ; j--)
	{
		c = s[j];
		s[j] = s[k];
		s[k] = c;
		k--;
	}
}
