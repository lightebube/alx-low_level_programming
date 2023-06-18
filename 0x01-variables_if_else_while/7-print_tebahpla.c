#include <stdio.h>

/**
 * main - Prints alphabets in lowercase in reverse
 * Return: Always 0
 */
int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}

	putchar('\n');

	return (0);
}
