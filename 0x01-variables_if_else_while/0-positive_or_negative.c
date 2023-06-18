#include <stdio.h>

/**
 * main = Checks if n is positive or negative
 * Return = Always 0 (Success)
 */
int main(void)
{
	int n = -345;

	if ( 0 < n ) 
	{
		printf("%d is positive\n", n);
	}
	else if ( n == 0 ) 
	{
		printf("%d is zero\n", n);
	}
	else 
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
