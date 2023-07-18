#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	char *f = __FILE__;

	printf("%s\n", f);
	return (0);
}
