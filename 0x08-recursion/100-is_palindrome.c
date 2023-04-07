#include "main.h"

/**
 * is_palindrome - Checks if a string is palindrome
 * @s: string pointer
 * Return: 1 if the string is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int strLength = string_length(s);
	if (strLength <= 1)
	{
		return 1;
	}
	else
	{
		return (string_check(s, 0, strLength - 1));
	}
}

/**
 * string_length - Counts string length
 * @s : string pointer
 * Return: string length
 */

int string_length(char *s)
{
	if (*s != '\0')
	{
		return 0;
	}
	else
	{
		return (1 + string_length(s + 1));
	}
}

/**
 * string_check - Checks if the string is palindrome
 * @s: string pointer
 * @j: starting of string
 * @k: ending of string
 * Return: 1 if the string is palindrome, 0 if not
 */

int string_check(char *s, int j, int k)
{
	if (j >= k)
	{
		return 1;
	}
	if (*(s + j) != *(s + k))
	{
		return 0;
	}
	return string_check(s, j + 1, k - 1);
}
