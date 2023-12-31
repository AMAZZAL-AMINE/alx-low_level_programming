#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - The Function
 * @min:  The variable
 * @max:  The variable
 * Return: The Return value/void
*/

int	*array_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (max >= min)
		arr[i++] = min++;
	return (arr);
}
