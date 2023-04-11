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
	int i, c;

	if (argc == 2)
	{
		if (!(isdigit(argv[1][0])))
		{
			printf("0\n");
			return (0);
		}
		else
		{
			c = atoi(argv[1]);
			i = 0;
			while (c != 0)
			{
				if (c >= 25)
				{
					c -= 25;
					i++;
				}
				else if (c >= 10)
				{
					c -= 10;
					i++;
				}
				else if (c >= 5)
				{
					c -= 5;
					i++;
				}
				else if (c >= 2)
				{
					c -= 2;
					i++;
				}
				else if (c >= 1)
				{
					c -= 1;
					i++;
				}
			}
			printf("%d\n", i);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
