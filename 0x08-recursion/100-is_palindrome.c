#include "main.h"

/**
 * is_palindrome - Checks if a string is palindrome
 * @s: string pointer
 * Return: 1 if the string is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i, j, strLength;

	i = 0;
	j = 0;
	strLength = 0;
	strLength = string_length(s, i);

	if (*(s + j) != *(s + strLength))
	{
		return (0);
	}
	else
	{
		return (string_check(s, j, strLength));
	}
}

/**
 * string_length - Counts string length
 * @s : string pointer
 * @i: counter
 * Return: string length
 */

int string_length(char *s, int i)
{
	if (*(s + i) != '\0')
	{
		i++;
		string_length(s, i);
	}
	return (i);
}

/**
 * string_check - Checks if the string is palindrome
 * @s: string pointer
 * @j: counter
 * @strLength : string length
 * Return: 1 if the string is palindrome, 0 if not
 */

int string_check(char *s, int j, int strLength)
{
	if (strLength % 2 != 0) 
	{
		if (*(s + j) == *(s + (strLength - 1)) && j != strLength)
		{
			j++;
			strLength--;
			string_check(s, j, strLength);
		}

	return (1);
}
