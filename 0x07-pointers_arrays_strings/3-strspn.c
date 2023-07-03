#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: first string
 * @accept: second string
 *
 * Return: accept_length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int accept_length = strlen(accept);
	unsigned int s_length = strlen(s);
	unsigned int i;

	if (s_length < accept_length)
	{
		return (0);
	}
	for (i = 0; i < accept_length; i++)
	{
		if (s[i] != accept[i])
		{
			return (accept_length + 1);
		}
	}

	return (accept_length);
}
