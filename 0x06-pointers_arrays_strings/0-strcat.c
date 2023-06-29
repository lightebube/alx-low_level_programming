#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	
	*ptr = '\0';

	return (dest);
}
