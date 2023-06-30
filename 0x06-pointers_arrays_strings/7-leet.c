#include "main.h"

/**
 * leet - Replace some characters with integers
 * @s: string
 *
 * Return: 0
 */
char *leet(char *s)
{
	int i;
	char *ptr = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a')
		{
			s[i] -= 45;
		}
		if (s[i] == 'A')
		{
			s[i] -= 13;
		}
		if (s[i] == 'e')
		{
			s[i] -= 50;
		}
		if (s[i] == 'E')
		{
			s[i] -= 18;
		}
		if (s[i] == 'o')
		{
			s[i] -= 63;
		}
		if (s[i] == 'O')
		{
			s[i] -= 31;
		}
		if (s[i] == 't')
		{
			s[i] -= 61;
		}
		if (s[i] == 'T')
		{
			s[i] -= 29;
		}
	}

	return (ptr);
}
