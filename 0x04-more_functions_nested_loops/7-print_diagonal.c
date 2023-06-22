#include "main.h"

/**
 * main - Prints diagonal lines
 * Return: nothing, void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n;)
		{
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}

	_putchar('\n');

	return;
}
