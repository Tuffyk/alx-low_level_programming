#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Numbers must be separated by , followed by a space
 * The two digits must be different
 * Numbers should be printe in ascending order, with two digits
 * Return: 0
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0 ; digit1 < 9 ; digit1++)
	{
		for (digit2 = digit1 + 1 ; digit2 <= 9 ; digit2++)
		{
			if (digit1 < 9 && digit2 <= 9)
			{
				putchar('0' + digit1);
				putchar('0' + digit2);
			}
			if (digit1 != 8 && digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
