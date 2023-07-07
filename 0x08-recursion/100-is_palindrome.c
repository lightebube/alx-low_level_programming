#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is empty
 * @s: string
 *
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int start = 0;
	int end = len - 1;

	if (s[start] != s[end])
		{
			return (0);
		}
		start++;
		end--;

	return (1);
}
