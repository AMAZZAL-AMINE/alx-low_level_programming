#include <stdio.h>

/**
 * main - print_alphabets.c
 *
 * Description: print alphabet.
 * Return: return 0.
*/
int main(void)
{
	int i = 97;
	int a = 65;

	while (i <= 122)
		putchar(i++);
	while (a <= 90)
		putchar(a++);
	putchar('\n');
	return (0);
}
