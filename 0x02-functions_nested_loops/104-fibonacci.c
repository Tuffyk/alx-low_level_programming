#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int n1, n2, sum;

	n1 = 1;
	n2 = 2;
	sum = n1 + n2;
	printf("%ld, %ld, ", n1, n2);

	i = 3;
	while (i <= 98)
	{
		if (i < 98)
		{
			printf("%ld, ", sum);
			n1 = n2;
			n2 = sum;
			sum = n1 + n2;
		}
		else
		{
			printf("%ld\n", sum);
		}
		i++;
	}
	return (0);
}
