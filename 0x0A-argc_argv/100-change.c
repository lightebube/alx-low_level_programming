#include <stdio.h>
#include <stdlib.h>

/**
 * coins - coins
 * @cents: sent
 *
 * Return: 0
 */
int coins(int cents)
{
	int i;
	int count = 0;
	int coin[] = {25, 10, 5, 2, 1};
	int num_coin = sizeof(coin) / sizeof(coin[0]);

	if (cents < 0)
	{
		return (0);
	}
	for (i = 0; i < num_coin; i++)
	{
		count += cents / coin[i];
		cents %= coin[i];
	}

	return (count);
}

/**
 * main - prints min num of coins
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int min = coins(cents);

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", min);
	}

	return (0);
}
