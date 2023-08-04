#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: the number to set the bit in
 *@index: the index of the bit to set
 *Return: 1 if it worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int not = ~(*n);

	if (index > 64)
		return (-1);
	not	|= 1 << index;
	*n = ~not;
	return (1);
}
