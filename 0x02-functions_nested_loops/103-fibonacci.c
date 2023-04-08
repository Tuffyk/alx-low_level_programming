#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms in a Febonacci sequence
 * the sequence must not exceed 4000000
 * Return: 0
 */

int main(void)
{
	long int n1, n2, nextN, sum;

	n1 = 0;
	n2 = 1;
	sum = 0;
	nextN = n1 + n2;
	while (nextN <= 4000000)
	{
		if (nextN % 2 == 0)
		{
			sum = sum + nextN;
		}
		n1 = n2;
		n2 = nextN;
		nextN = n1 + n2;
	}
	printf("%ld\n", sum);
	return (0);
}
