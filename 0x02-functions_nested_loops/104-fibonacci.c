#include "main.h"

/**
 * main - print sum of even fibonacci numbers
 * Return: 0 Success
 */

int main(void)
{
	int count;
	unsigned long i, j, k;
	unsigned long m, n, p, result;

	count = 0;
	i = 0;
	j = 1;
	for (count = 1; count <= 91; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		result = (m + n) / 1000;
		p = (m + n) - result * 1000;
		k = (i + j) + result;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
