#include "main.h"

/**
 * print_array - Prints the values of an array
 * @a: the int
 * @n: the arrays
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d, ", a[j]);
	}

	printf("\n");
}
