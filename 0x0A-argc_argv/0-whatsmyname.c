#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments passed to the function.
 * @argv: array of arguments passed to the function.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
