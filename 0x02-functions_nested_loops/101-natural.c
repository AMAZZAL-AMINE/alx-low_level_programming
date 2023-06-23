#include "main.h"

/**
 * main - print sum of multiples of 3 and 5
 * Return: 0 Success
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
