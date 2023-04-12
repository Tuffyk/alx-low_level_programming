#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: array of chars
 *
 * Return: a pointer to the array, "NUll" otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);
	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
		return (ar);
	}
}
