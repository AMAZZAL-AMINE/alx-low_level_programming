#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to a char
 *
 * Return: int
 */

int	_atoi(char *s)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	sign = 1;
	n = 0;
	while ((*(s + i) < '0' || *(s + i) > '9') && *(s + i))
	{
		if (*(s + i) == '-')
			sign *= -1;
		i++;
	}
	while (*(s + i) >= '0' && *(s + i) <= '9')
	{
		n = n * 10 + sign * (*(s + i) - '0');
		i++;
	}
	return (n);
}
