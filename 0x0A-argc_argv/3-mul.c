#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int l = 1;
	int i;

	if (argc > 1 && argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			l *= atoi(argv[i]);
		}
		printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}
