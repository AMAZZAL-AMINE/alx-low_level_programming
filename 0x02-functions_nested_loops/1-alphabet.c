#include <stdio.h>

/**
* main - 1-alphabet.c
* Return: null to return nothing
*/

void print_alphabet(void)
{
	char	count;

	count = 'a';
	while (count <= 'z')
	{
		putchar(count);
		count++;
	}
	putchar('\n');
}
