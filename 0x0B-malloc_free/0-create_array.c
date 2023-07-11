#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an arrays of chars
 * @size: number of array
 * @c: char
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
