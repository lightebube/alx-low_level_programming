#include <stdio.h>
#include <stdlib.h>

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
		for (i = 0; i < argc; i++)
		{
			char *number = argc[i];
			while (*number)
			{
				if (!isdigit(*number))
				{
					printf("Error\n");
				}
				number++;
				else
				{
					l += atoi(argv[i]);
				}
			}
			printf("%d\n", l);
		}
	}
	else
	{
		printf("0\n");
	}

	return (1);
}
