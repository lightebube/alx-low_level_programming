#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of times to concatenate
 *
 * Return: a pointer to the new allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, h, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
		h = 0;
	else
	{
		for (h = 0; s2[h] != '\0'; h++)
			;
	}
	if (h > n)
		h = n;
	s = malloc(sizeof(char) * (i + h + 1));
			if (s == NULL)
			{
				return (NULL);
			}
			for (k = 0; k < i; k++)
			{
				s[k] = s1[k];
			}
			for (k = 0; k < h; k++)
			{
				s[k + i] = s2[k];
			}
			s[i + h] = '\0';

			return (s);
}
