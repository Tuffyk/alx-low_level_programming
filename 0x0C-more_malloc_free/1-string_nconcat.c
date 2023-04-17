#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of first bytes of s2
 *
 * Return: pointer to the new string on success, otherwise "NULL"
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	if (n < len2)
	{
		str = malloc(sizeof(char) * (len1 + n + 1));
		if (str == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; i <= n; i++)
			str[len1 + i] = s2[i];
		str[n + i] = '\0';
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; i <= len2; i++)
			str[len1 + i] = s2[i];
	}
	return (str);
}
