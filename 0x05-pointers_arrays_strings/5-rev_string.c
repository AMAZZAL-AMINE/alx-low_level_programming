#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a char
 *
 * Return: void
 */

void	rev_string(char *s)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	while (*(s + i))
		i++;
	j = 0;
	while (j < --i)
	{
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
		j++;
	}
}
