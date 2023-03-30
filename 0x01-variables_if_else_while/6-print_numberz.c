#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 * followed by a new line
 * Not allowed to use any variable of type char
 * Only using the putchar function
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');

	return 0;
}
