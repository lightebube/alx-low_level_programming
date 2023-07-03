#include "main.h"

/**
 * _memcpy - Copies memory of 1 string to another
 * @dest: string being copied into
 * @src: string being copied from
 * @n: unsigned int
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
