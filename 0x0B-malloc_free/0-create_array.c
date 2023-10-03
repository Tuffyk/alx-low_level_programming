#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * initializes it with a specific char
 * @size: size of array
 * @c: the specific char
 * Return: pointer to the array on success, otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	str = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (s);
}
