#include <stdio.h>
#include <stdlib.h>

/**
 *cando - checks if a string is a valid integer.
 *@s: string to check.
 *
 *Return: 1 if string is a valid integer, else 0.
 */

int cando(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/**
 *main - adds positive numbers
 *@argc: number of arguments passed to the function.
 *@argv: array of arguments passed to the function.
 *
 *Return: 0 if no errors, else 1
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		if (!cando(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
