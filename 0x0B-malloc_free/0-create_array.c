#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: array of chars
 *
 * Return: 0 on success (a pointer to the array), "NUll" otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(size);
	*ar = c;
	if (size == 0)
	{
		return (NULL);
	}
	if (ar == NULL)
	{
		_putchar('0');
	}
	else
	{
		return (ar);
	}
}
