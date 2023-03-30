#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line
 * Prints all letters except q and e
 * only using the putchar function
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	do {
		putchar(c);
		c++;
	} while (c <= 'z' && c != 'e' && c != 'q');

	putchar('\n');

	return (0);
}
