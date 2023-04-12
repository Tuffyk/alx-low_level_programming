#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Returns a newly allocated space in memory
 * which contains a copy of a the string given a parameter
 * @str: the given string
 *
 * Return: pointer to the duplicate string. otherwise "NULL"
 */

char *_strdup(char *str)
{
	char *s_cpy;
	int i, j, str_len;

	str_len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			str_len++;
		}
		s_cpy = malloc(sizeof(char) * (str_len + 1));
		for (j = 0; j <= str_len; j++)
		{
			s_cpy[j] = str[j];
		}
		return (s_cpy);
	}
}
