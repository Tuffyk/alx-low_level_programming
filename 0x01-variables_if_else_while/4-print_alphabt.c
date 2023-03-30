#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line
 * Prints all letters except q and e
 * only using the putchar function
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
