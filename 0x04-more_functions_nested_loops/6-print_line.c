#include "main.h"

/**
 * main - prints a line
 * Return: 0
 */
void print_line(int n)
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
			_putchar(95);
			i++;
		}
	}

	_putchar('\n');

	return;
}
