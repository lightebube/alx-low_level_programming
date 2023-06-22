#include "main.h"

/**
 * main - Prints numbers from 0 to 9 except 2,4
 * Return: 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9;)
	{
		if (a == 2 || a == 4)
		{
			a++;
			continue;
		}
		else
		{
			_putchar('0' + a);
			a++;
		}
	}

	_putchar('\n');

	return;
}
