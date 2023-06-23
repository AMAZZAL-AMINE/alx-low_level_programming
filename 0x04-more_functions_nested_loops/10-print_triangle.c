#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: void
 */

void	print_triangle(int size)
{
	int	i = 0;
	int	j = 0;
	int	k = 0;

	if (size > 0)
	{
		while (i < size)
		{
			j = size - 1 - i;
			k = 0;
			while (k < size)
			{
				if (k < j)
					_putchar(' ');
				else
					_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
