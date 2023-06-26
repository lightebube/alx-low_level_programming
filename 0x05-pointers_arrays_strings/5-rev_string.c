#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	int h = strlen(s);
	int i = 0;
	int j = h - 1;

	while (i < j)
	{
		char x = s[i];
		s[i] = s[j];
		s[j] = x;
		i++;
		j--;
	}
}
