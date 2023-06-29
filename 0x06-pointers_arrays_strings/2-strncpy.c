#include "main.h"
#include <string.h>

/**
 * _strncpy - A function that copies a string
 * @dest: first string
 * @src: second string
 * @n: integer
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; n >= 1 && *src != '\0';)
	{
		dest[n] = src[n];
	}
	/*for ( ; n > 0;)
	{
		dest[n] = '\0';
	}*/

	return (dest);
}
