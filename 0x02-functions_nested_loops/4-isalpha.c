#include <stdio.h>

/**
 * _isalpha - 4-isalpha.c
 * @c : is the parameter
 * Return: 1 if lower case, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
