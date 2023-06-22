#include "main.h"

/**
 * main - Prints 0 to 14 10 times
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; j = 0)
	{
		while (j < 10)
		{
			_putchar('0' + i);
			i++;
		}

		_putchar('\n');
		j++;
	}

	return;
}
