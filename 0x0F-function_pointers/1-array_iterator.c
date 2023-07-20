#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - assigns a number of arrays
 * @array: array name
 * @size: size of the array
 * @action: fuction pointer
 *
 * Return: void, nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
