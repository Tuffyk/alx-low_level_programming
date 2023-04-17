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
	int i, j, k, l, s1_len, s2_len, c_len;

	s1_len = 0;
	s2_len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != '\0')
			s1_len++;
		if (s2[i] != '\0')
			s2_len++;
	}
	c_len = s1_len + s2_len;
	c = malloc(sizeof(char) * c_len + 1);
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
		for (l = 0, k = j; s2[l] != '\0'; l++, k++)
		{
			c[k] = s2[l];
		}
		return (c);
	}
}
