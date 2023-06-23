#include "main.h"

/**
 * print_times_table - print times table
 * @n: number to check
 * Return: void
 */

void print_times_table(int n)
{
	int i, dcount, count;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (dcount = 0; dcount <= n; dcount++)
			{
				count = (i * dcount);
				if (dcount != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (count < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((count % 10) + '0');
				}
				else if (count >= 10 && count < 100)
				{
					_putchar(' ');
					_putchar((count / 10) + '0');
					_putchar((count % 10) + '0');
				}
				else if (count >= 100 && j != 0)
				{
					_putchar((count / 100) + '0');
					_putchar((count / 10) % 10 + '0');
					_putchar((count % 10) + '0');
				}
				else
				{
					_putchar((count % 10) + '0');
				}
			}
		_putchar('\n');
		}
	}
}
