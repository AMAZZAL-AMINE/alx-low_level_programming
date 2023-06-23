#include <stdio.h>

/**
 * main - 0-putchar.c.
 * Description: use write to stdout to print _putchar.
 * Return: null; to close function.
 */

void print_alphabet(void)
{
	char	*str;
	int	count;

	count = 0;
	str = "_putchar\n";
	while (str[count] != '\0')
	{
		putchar(str[count]);
		count++;
	}
	return;
}
