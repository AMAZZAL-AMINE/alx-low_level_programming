#include "main.h"

/**
 * main - print sum of even fibonacci numbers
 * Return: 0 Success
 */

int main(void)
{
	unsigned long count, i, j, k;

	i = 0;
	j = 1;
	count = 0;
	while (count < 50)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (count == 49)
			putchar('\n');
		else
			printf(", ");
		count++;
	}
	return (0);
}
