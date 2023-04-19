#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to a function comparing values
 *
 * Return: on success; index of first element that matches the search
 * otherwise -1 if no elemnt matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
}
