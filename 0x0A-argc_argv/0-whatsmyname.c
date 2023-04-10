#include <stdlib.h>
#include <stdio.h>

/**
 * main - The programme will print its name, followed by a new line
 * @argc: the count of the arguments
 * @argv: array of pointers to the strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[(argc - 1)]);
	return (0);
}
