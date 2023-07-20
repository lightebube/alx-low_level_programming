#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its iop code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bit, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bit = atoi(argv[i]);

	if (bit < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < bit; i++)
	{
		if (i == bit - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}

	return (0);
}
