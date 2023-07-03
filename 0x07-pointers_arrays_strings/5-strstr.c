#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
