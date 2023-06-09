#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 followed by a new line
 * For multiples of three print "Fizz" instead
 * For multiples of five print "Buzz" instead
 * For multiples of both three and five print "FizzBuzz" instead
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");

	return (0);
}
