#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order
 * Only using the putchar function
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar('0' + n);
		if (n < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	return (0);
}

