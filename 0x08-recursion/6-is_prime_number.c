#include "main.h"

/**
 *is_prime - check if a number is prime
 *@n: the number in hand
 *@start: the starting point
 *Return: 1 if number is prime otherwise 0
 */

int is_prime(int n, int start)
{
	if (start == n)
		return (1);
	if (n % start == 0)
		return (0);
	return (is_prime(n, start + 1));
}

/**
 *is_prime_number - check if a number is prime
 *@n: the number in hand
 *Return: 1 if number is prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
