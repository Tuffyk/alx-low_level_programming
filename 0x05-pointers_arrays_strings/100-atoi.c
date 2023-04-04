#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: pointer to string
 * Return: converted string
 */

int _atoi(char *s)
{
	int i, sign, newS;

	sign = -1;
	newS = 0;

	for (i = 0 ; *s != '\0' ; i++)
	{
		if (*(s + i) == '-')
		{
			sign *= -1;
		}
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			if (newS < 0)
			{
				newS = (newS * 10) - (*(s + i) - '0');
			}
			else
			{
				newS = (*((s + i - '0')) * -1);
			}
		}
	}
	if (p < 0)
	{
		newS *= -1;
	}
	return (newS);
}
