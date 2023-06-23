#include "main.h"

/**
 * times_table - print times table
 * Return: void
 */

void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			l = k / 10;
			m = k % 10;
			if (k < 10)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar(l + '0');
				_putchar(m + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
