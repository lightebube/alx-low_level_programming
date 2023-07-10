#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i;
	int l = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isalpha(*argv[i]))
			{
				printf("Error\n");
				return (0);
			}
			else
			{
				l += atoi(argv[i]);
			}
		}
			printf("%d\n", l);
	}
	else
	{
		printf("0\n");
	}

	return (1);
}
