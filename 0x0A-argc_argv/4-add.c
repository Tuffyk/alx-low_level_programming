#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers, followed by a new line
 * @argc: count of arguments
 * @argv: array of strings
 *
 * Return: 0 on success, 1 on "Error".
 */

int main(int argc, char *argv[])
{
	int i, j, check_int, sum;

	sum = 0;
	check_int = 0;
	if (argc < 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]))
				{
					sum += atoi(argv[i]);
				}
				else
				{
					check_int = 1;
					break;
				}
			}
		
		}
	}
	if (check_int == 0)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
