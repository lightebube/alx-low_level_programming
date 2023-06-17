#include <stdio.h>
/*
 * main = Checks the last digit of n
 * Return = Always 0 (Success)
 */

int main(void)
{
	int n = 12;
	int lastDigit = n % 10;
	char *str1 = "Last digit of";
	char *str2 = "is";

	if (lastDigit > 5)
	{
		printf("%s ", str1);
		printf("%d ", n);
		printf("%s ", str2);
		printf("%d and is greater than 5\n", lastDigit);
	}
	if (lastDigit == 0)
	{
		printf("%s ", str1);
		printf("%d ", n);
		printf("%s ", str2);
		printf("%d and is 0", lastDigit);
	}
	if (6 > !(lastDigit != 0))
	{
		printf("%s ", str1);
		printf("%d ", n);
		printf("%s ", str2);
		printf("%d and is less than 6 and not 0", lastDigit);
	}

	return (0);
}
