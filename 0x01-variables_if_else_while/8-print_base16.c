#include <stdio.h>

/**
 * main - Prints base 16
 * Return: Always 0
 */
int main(void)
{
	int number = 0;
	char letter = 'a';

	while (number < 10)
	{
		putchar('0' + number);
		number++;
	}

	while (letter < 'g')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
