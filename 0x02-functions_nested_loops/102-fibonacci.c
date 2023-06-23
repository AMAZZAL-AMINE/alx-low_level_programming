#include "main.h"

/**
 * main - print sum of even fibonacci numbers
 * Return: 0 Success
 */

int main(void)
{
	int i;
	long int a = 1, b = 2, c = 0, sum = 2;

	for (i = 0; i < 30; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%ld\n", sum);
	return (0);
}
