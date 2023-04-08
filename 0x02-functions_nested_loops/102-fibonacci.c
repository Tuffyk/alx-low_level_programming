#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i, n1, n2, sum;

	n1 = 1;
	n2 = 2;
	sum = n1 + n2;
	
	printf("%d, %d, ", n1, n2);

	i = 3;
	while (i <= 50)
	{
		printf("%d, ", sum);
		n1 = n2;
		n2 = sum;
		sum = n1 + n2;
		i++;
	}
	return (0);
}
