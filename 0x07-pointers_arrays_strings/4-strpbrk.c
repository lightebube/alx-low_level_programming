#include "main.h"
#include <string.h>

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: first string
 * @accept: second string
 *
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
