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

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (!(cmp(array[i])))
		i++;
		else
		break;
	}
	if (cmp(array[i]))
		return (i);
	else
		return (-1);
}
