#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _sqrt_recursion - prints the square root of a number
 * @n: number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int i;

	i = sqrt(n);
	if (i < 0)
	{
		return(-1);
	}
	else
	{
		return(i);
	}

	return(0);
}
