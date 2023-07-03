#include "main.h"

/**
 * print_chessboard - prints values of a 2D array
 * @a: array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%d", a[i][j]);
			if (j == 8)
			{
				printf("\n");
			}
		}
	}
}
