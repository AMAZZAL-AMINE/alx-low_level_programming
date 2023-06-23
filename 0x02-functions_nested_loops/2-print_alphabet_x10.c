#include <stdio.h>

/**
* print_alphabet_x10 - print alphabet 10
* Return: not return
*/

void print_alphabet_x10(void)
{
	int i = 1;
	int count = 'a';

	while (i <= 10)
	{
		count = 'a';
		while (count <= 'z')
		{
			putchar(count);
			count++;
		}
		putchar('\n');
		i++;
	}
}
