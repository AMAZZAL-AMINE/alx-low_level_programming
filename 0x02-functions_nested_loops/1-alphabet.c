#include <stdio.h>

/**
* main - 1-alphabet.c
* description: prints alphabet
* Return: 0 success
*/


int main(void)
{
  char count = 'a';

	while (count <= 'z')
	{
		putchar(count);
		count++;
	}
	putchar('\n');
  return (0);
}