#include <stdio.h>

/**
 * main - print_comb3.c
 * Description: print cmp digits.
 * Return: return 0.
*/
int main(void)
{
	int index = 0;
	int count;

	while (index <= 9)
	{
		count = 0;
		while (count <= 9)
		{
			if (count > index)
			{
				putchar(index + 48);
				putchar(count + 48);
				if (index < 8 || count < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			count++;
		}
		index++;
	}
	putchar ('\n');
	return (0);
}
