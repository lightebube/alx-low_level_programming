#include <stdio.h>

/**
 * main - Prints alphabets in lowercase
 * Return: Always 0
 */
int main(void)
{
	char lowercase = 'a';

	while ( lowercase <= 'z' )
	{
		putchar(lowercase);
		lowercase++;
	}

	putchar('\n');

	return (0);
}
