#include <stdio.h>

/**
 * main - print_comb.c
 * Description: prints single-digit.
 * Return: return 0.
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i++);
		if (i <= 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
