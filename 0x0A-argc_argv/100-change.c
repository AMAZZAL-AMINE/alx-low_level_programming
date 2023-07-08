#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money.
 * @argc: number of arguments passed to the function.
 * @argv: array of arguments passed to the function.
 *
 * Return: 0 if no errors, else 1
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; atoi(argv[1]) > 0; i++)
	{
		if (atoi(argv[1]) >= 25)
			atoi(argv[1]) -= 25;
		else if (atoi(argv[1]) >= 10)
			atoi(argv[1]) -= 10;
		else if (atoi(argv[1]) >= 5)
			atoi(argv[1]) -= 5;
		else if (atoi(argv[1]) >= 2)
			atoi(argv[1]) -= 2;
		else
			atoi(argv[1]) -= 1;
		sum++;
	}
	printf("%d\n", sum);
	return (0);
}
