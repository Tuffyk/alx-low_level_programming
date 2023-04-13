#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string. otherwise "NULL"
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, k, s1_len, s2_len, c_len;

	s1_len = 0;
	s2_len = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != '\0')
			s1_len++;
		if (s2[i] != '\0')
			s2_len++;
	}
	c_len = s1_len + s2_len + 2;
	c = malloc(sizeof(char) * (c_len));
	if (c == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			c[j] = s1[j];
		}
		for (k = j; s2[k] != '\0'; k++)
		{
			c[k] = s2[k];
		}
		return (c);
	}
}