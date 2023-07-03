#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[i])
		{
			return (needle);
		}
	}

	return (NULL);
}
