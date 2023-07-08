#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc;)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}

	return (0);
}
