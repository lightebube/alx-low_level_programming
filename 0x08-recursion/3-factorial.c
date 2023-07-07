#include "main.h"

/**
 * factorial - find the factorial of a number
 * @n: number
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
		factorial(n);
	}

	return (0);
}
