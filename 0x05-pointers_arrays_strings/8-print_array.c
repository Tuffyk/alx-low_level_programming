#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * followed by a new line
 * @a: int pointer
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%p", *a);
	}
	printf("\n");
}
