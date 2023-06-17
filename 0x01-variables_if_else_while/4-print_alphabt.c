#include <stdio.h>

/**
 * main - Print all the alphabet except q and e
 * Return: Always 0
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'y' && lowercase != 'k')
		{
			putchar(lowercase);
			lowercase++;
		}
	}

	putchar('\n');

	return (0);
}
