#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - Allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory on success
 * "NULL" if malloc fails or if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	else
	{
		ptr = malloc(nmemb * size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
}
