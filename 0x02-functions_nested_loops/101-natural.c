#include "main.h"

/**
 * print_times_table - print times table
 * @n: number to check
 * Return: void
 */

int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	printf("%d\n", result);
	return (0);
}
