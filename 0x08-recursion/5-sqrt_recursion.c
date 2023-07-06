#include "main.h"

/**
 * natural_sqrt_recursion - calculates the square root of a number using
 * recursion
 * @n: the number to deal with.
 * @i: the number to increment.
 *
 * Return: square root of n.
 */

int natural_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (natural_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to deal with.
 *
 * Return: square root of n.
 */

int _sqrt_recursion(int n)
{
	return (natural_sqrt_recursion(n, 1));
}


