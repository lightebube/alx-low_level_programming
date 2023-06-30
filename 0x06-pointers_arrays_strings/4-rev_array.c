#include "main.h"

/**
 * reverse_array - Function that prints an array in reverse
 * @a: the array
 * @n: the size of array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}
