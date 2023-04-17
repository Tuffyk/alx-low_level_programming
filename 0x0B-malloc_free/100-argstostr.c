#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - Concatenates all the arguments of a program
 * @ac: arguments count
 * @av: array of strings
 *
 * Return: pointer to the new string on success, otherwise "NULL"
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	len = 0, k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		k++;
		str[k] = '\n';
	}
	return (str);
}
