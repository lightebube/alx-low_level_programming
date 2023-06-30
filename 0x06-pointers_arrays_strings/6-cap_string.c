#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalize all words in a string
 * @str: the string
 *
 * Return: 0
 */
char *cap_string(char *str)
{
	int i, len1;
	len1 = strlen(str);
	i = 0;

	if (str[i] == ' ')
	{
	for (i = 0; i < len1; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[i] -= 32;
		}
		}
	}

	return (0);
}
