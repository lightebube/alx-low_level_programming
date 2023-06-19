#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main = Checks if n is positive or negative
 * Return = Always 0 (Success)
 */
int main(void)
{
	int n;
		srand(time(0));
	n = rand() % 201 - 100;/*Generates a random number between -100 and 100*/

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
