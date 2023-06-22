#include "main.h"

/**
 * main - Checks for numbers and alphabets
 * Return: 1 if a digit and 0 if a letter
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
