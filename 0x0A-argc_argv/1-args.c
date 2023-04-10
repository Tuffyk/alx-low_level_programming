#include <stdio.h>

/**
 * main - The programme will print the number of arguments passed into it
 * followed by a new line
 * @argc: the count of the arguments
 * @argv: array of pointers to the strings
 *
 * Return: 0 on success.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
