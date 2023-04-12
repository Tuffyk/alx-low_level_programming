#include "main.h"
#include <stdlib.h>

/**
 * *_strdub - Returns a newly allocated space in memory
 * which contains a copy of a the string given a parameter
 * @str: the given string
 *
 * Return: pointer to the duplicate string. otherwise "NULL"
 */

char *_strdup(char *str)
{
	char *s_cpy;
	int i; j; str_len;

	str_len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		str_len++;
	}
	s_cpy = malloc(sizeof(char) * str_len);
	if (str_len == 0 || str_len == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			s_cpy[j] = str[j];
		}
		return (s_cpy);
	}
}
