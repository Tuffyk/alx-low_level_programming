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
	char *str;
	int len1, len2, i;

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
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (i = 0; i <= len2; i++)
		str[len1 + i] = s2[i];
	return (str);
}
