#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	double n1, n2, sum;

	n1 = 1;
	n2 = 2;
	sum = n1 + n2;
	printf("%.0f, %.0f, ", n1, n2);

	i = 3;
	while (i <= 98)
	{
		if (i < 98)
		{
			printf("%.0f, ", sum);
			n1 = n2;
			n2 = sum;
			sum = n1 + n2;
		}
		else
		{
			printf("%.0f\n", sum);
		}
		i++;
	}
	return (0);
}
