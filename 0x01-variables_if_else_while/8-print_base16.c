#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase followed by a new line
 * Only using the putchar function
 * Return: 0
 */

int main(void)
{
	int n;
	char c;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar('0' + n);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
