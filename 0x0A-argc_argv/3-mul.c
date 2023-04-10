#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: count of arguments
 * @argv: array of pointers to the strings
 *
 * Return: 0 on success, 1 on "Error"
 */

int main(int argc, char *argv[])
{
	int multi = 0;

	if (argc <= 22)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
		return (0);
	}
}
