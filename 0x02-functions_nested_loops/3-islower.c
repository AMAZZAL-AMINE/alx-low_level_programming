#include <stdio.h>

/**
 * _islower - 3-islower.c
 * Description: Check if a character is lowercase
 * Return: 1 if lower case, 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
