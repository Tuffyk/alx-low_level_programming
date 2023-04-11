#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the minimum number of coins
 * to make change of an amount of money
 * @argc: count of arguments
 * @argv: array of strings
 *
 * Return: 0 on success, 1 on "Error"
 */

int main(int argc, char *argv[])
{
	int i, amount, count, check_int;

	check_int = 0, count = 0;
	if (argc == 2)
	{
		for (i = 0; argv[1][i] != '\0'; i++)
		{
			if (!isdigit(argv[1][i]))
				check_int = 1;
		}
		if (check_int == 1)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			amount = atoi(argv[1]);
			while (amount != 0)
			{
				if (amount >= 25)
					amount -= 25;
				else if (amount >= 10)
					amount -= 10;
				else if (amount >= 5)
					amount -= 5;
				else if (amount >= 2)
					amount -= 2;
				else if (amount >= 1)
					amount -= 1;
				count++;
			}
			printf("%d\n", count);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
