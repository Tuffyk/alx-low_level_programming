#include <stdio>

/**
 * main - Prints all arguments it receives
 * @argc: count of arguments
 * @argv[]: array of pointers to the strings
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
