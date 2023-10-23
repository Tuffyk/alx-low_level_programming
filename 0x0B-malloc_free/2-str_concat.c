#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ns;
	int i, j, lens1, lens2, len;

	if (s1 != NULL)
	{
		for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;
	}
	if (s2 != NULL)
	{
		for (lens2 = 0; s2[lens2] != '\0'; lens2++)
			;
	}
	len = lens1 + lens2;
	ns = (char *)(malloc(sizeof(char) * (len + 1)));
	if (ns == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		ns[i] = s1[i];
	for (j = 0; j < lens2; j++, i++)
		ns[i] = s2[j];
	ns[len] = '\0';
	return (ns);
}
