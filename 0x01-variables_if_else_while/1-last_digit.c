#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program assigns a random number to the variable n
 * Return: 0 success
 */

int main(void)
{
	int n;
	int help;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	help = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);	
	return (0);
}
