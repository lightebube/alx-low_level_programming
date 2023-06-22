#include "main.h"

/**
 * main - Prints numbers 0 - 9
 * Return: 0
 */
void print_numbers(void)
{
	int a = 0;

	for (a = 0; a < 10;)
	{
		_putchar('0' + a);
		a++;
	}

	_putchar('\n');

	return ;
}
