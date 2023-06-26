#include "main.h"

/**
 * puts2 - Prints every 2nd letter of a string
 * @str: thr string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str);
		i += 2;
	}
}
