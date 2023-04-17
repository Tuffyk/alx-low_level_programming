#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the array on success, otherwise "NULL"
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
