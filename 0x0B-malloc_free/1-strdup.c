#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * contains a copy of the string given as parameter
 * @str: pointer to string
 *
 * Return: pointer of the string, otherwise NULL
 */

char *_strdup(char *str)
{
	char *cp;
	int i, len;

	len = 0;
	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	cp = (char *)(malloc(sizeof(char) * (len + 1)));
	if (cp == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		cp[i] = str[i];
	cp[len] = '\0';
	return (cp);
}
