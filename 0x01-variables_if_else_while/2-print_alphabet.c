#include <stdio.h>

/**
 * main -Prints the alphabet in lowercase, followed by a new line
 * Only using the putchar function
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
