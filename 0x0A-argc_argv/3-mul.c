#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: count of arguments
 * @argv: array of pointers to the strings
 *
 * Return 0 on success, 1 on "Error"
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("%s\n", (argv[1] * argv[2]));
		return (0);
	}
	if (argc < 1)
	{
		printf("Error");
		return (1);
	}
}
