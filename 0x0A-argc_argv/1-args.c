#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments passed to the function.
 * @argv: array of arguments passed to the function.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
