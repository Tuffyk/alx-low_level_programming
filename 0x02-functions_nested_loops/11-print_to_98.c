#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * followed by a new line
 * Numbers must be seperated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number is the number passed to the function
 * The last printed number should be 98
 * Return: 0
 */

int print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d", n);
		n++;

		for (n ; n <= 98 ; n++)
		{
			printf(", %d", n);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		printf("%d", n);
		n--;

		for (n ; n >= 98 ; n--)
		{
			printf(", %d", n);
		}
		printf("\n");
	}
	else 
	{
		printf("%d\n", n);
	}
}
