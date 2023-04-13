#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Returns a pointer toa 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to an array initialized to 0, "NULL" on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int *arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(int) * (width * height));
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					arr[i][j] = 0;
				}
			}
		return (arr);
		}
	}
}
