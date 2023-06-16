#include <stdio.h>

/**
 * main - print_alphabet
 * Description: print the alphabet.
 * Return:  return 0.
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
		putchar(i++);
	putchar('\n');
	return (0);
}
