#include <stdio.h>

/**
 * main - print_base16.c
 * Description: print numbers.
 * Return: return 0.
*/
int main(void)
{
	int i = 48;
	int a = 97;

	while (i <= 57)
		putchar(i++);
	while (a <= 102)
		putchar(a++);
	putchar('\n');
	return (0);
}
