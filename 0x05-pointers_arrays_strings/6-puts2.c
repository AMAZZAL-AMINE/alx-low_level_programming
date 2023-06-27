#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: pointer to a char
 *
 * Return: void
 */

void	puts2(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}