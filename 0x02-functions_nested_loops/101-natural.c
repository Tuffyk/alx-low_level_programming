#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int i, sum;

	sum = 0;
	i = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + n;
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
