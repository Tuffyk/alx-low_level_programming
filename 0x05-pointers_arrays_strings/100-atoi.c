#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: pointer to string
 * Return: converted string
 */

int _atoi(char *s)
{
	int i, j, totalMin, length;

	i = 0;
	totalMin = 0;
	length = 0;

	while (*s != '\0')
	{
		if ((*(s + i)) == '-')
		{
			totalMin++;
		}
		i++;
	}
	if ( totalMin % 2 == 1)
	{
		*(s + 0) = '-';
		length++;

		for (j = 1 ; *s != '\0' ; j++)
		{
			if (*(s + j) >= 48 && *(s + j) <= 57)
			{
				*(s + length) = *(s + j);
				length++;
			}
		}
	}
	else
	{
		for (j = 0 ; *s != '\0' ; j++)
		{
			if (*(s + j) >= 48 && *(s + j) <= 57)
			{
				*(s + length) = *(s + j);
				length++;
			}
		}
	}
	*(s + length) = '\0';

	return (*s);
}
