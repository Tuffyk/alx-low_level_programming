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
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
