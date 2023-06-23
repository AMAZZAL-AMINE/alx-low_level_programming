#include "main.h"

/**
 * main - print sum of even fibonacci numbers
 * Return: 0 Success
 */

int main(void)
{
	unsigned long count, i, j, k, result;

	i = result = 0;
	j = 1;
	count = 0;
	while (count < 50)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			result += k;
		}
		count++;
	}
	printf("%lu\n", result);
	return (0);
}
