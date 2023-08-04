#include "main.h"

/**
 *base_two_power - returns the base of two to the power of n
 *@n: the power to raise the base of two to
 *Return: the base of two to the power of n
 */

unsigned int base_two_power(unsigned int n)
{
	unsigned int i = 0;
	unsigned int res = 1;

	while (i < n)
	{
		res *= 2;
		i++;
	}
	return (res);
}

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: a pointer to a string of 0 and 1 chars
 *Return: the converted number, or 0 if
 *there is one or more chars in the string b that is not 0 or 1
 *b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int decimal = 0;
	unsigned int j = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i--;
	while (b[j])
	{
		decimal += base_two_power(i) * (b[j] - '0');
		i--;
		j++;
	}
	return (decimal);
}


