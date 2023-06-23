#include "main.h"

/**
 * print_times_table - print times table
 * @n: number to check
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, k, l, m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				l = k / 100;
				m = k % 100;
				if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(' ');
					_putchar(l + '0');
					_putchar(m + '0');
				}
				else
				{
					_putchar(l + '0');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);
	return (0);
}
