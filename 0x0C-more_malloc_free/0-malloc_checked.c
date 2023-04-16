#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocates memory
 * @b: size of memory to be allocated
 *
 * Return: a pointer to the allocated memory on success, otherwise return "98".
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
