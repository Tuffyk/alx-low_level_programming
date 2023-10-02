#include "main.h"
#include <stdio.h>

/**
 * main - Prints number of arguments followed by new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
