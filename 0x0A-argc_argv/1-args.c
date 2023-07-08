#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	if (argc < 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s", argv[i]);
		}
	}

	return (0);
}
