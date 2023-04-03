#include "main.h"

/**
 * *_strcpy - Copies a string
 * @dest: char pointer
 * @src: char pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
	}

	for (j = 0 ; j <= i ; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
