#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 *        money.
 * @argc: number of arguments passed to the function.
 * @argv: array of arguments passed to the function.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, n, coins = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coins += n / cents[i];
		n %= cents[i];
	}

	printf("%d\n", coins);

	return (0);
}
