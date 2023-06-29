#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: integer
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	
	*ptr = '\0';

	return (dest);
}
