#include "main.h"

/**
 *get_code - gets the 1337 code for a letter
 *@c: the letter to encode
 *Return: returns the encoded letter
*/

int	get_code(int c)
{
	int i;
	char *letters = "aAeEoOtTlL";
	char *codes = "4433007711";

	for (i = 0; letters[i]; i++)
	{
		if (c == letters[i])
			c = codes[i];
	}
	return (c);
}

/**
 *leet - encodes a string into 1337
 *@s: the string to encode
 *Return: returns the encoded string
*/

char	*leet(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		s[i] = get_code(s[i]);
	return (s);
}
