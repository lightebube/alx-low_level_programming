#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
