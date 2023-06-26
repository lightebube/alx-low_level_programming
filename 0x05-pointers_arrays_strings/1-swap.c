#include "main.h"

/**
 * swap_int - Swaps the value of two ints
 * @a: first int
 * @b: second int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
