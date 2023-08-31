#include "main.h"
#include <math.h>

/**
 * is_prime_number - Return 1 if int is an even number
 * @n: integer
 *
 * Return: 1 if even number, 0 if odd number
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return(0);
	}
	while (i <= n)
	{
		for (i = 2; i <= n; i++)
		{
			if ((n % i) > 0)
			{
				i++;
				return(1);
			}
			else
			{
				return(0);
			}
		}
	}

	return(2);
}
