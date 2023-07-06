#include "main.h"

/**
 *is_separator - checks if a character is a separator
 *@c: the character in hand
 *Return: 1 if true else 0
 */

int is_separator(int c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 *is_lower - checks if a character is lowercase
 *@c: the character in hand
 *Return: 1 if true else 0
 */

int	is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 *cap_string - capitalizes all words of a string
 *@s: the string in hand
 *Return: pointer to the resulting string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] && is_lower(s[i]))
		s[i] -= 32;
	i++;
	while (s[i])
	{
		if (is_separator(s[i]) && s[i + 1] && is_lower(s[i + 1]))
			s[i + 1] -= 32;
		i++;
	}
	return (s);
}
