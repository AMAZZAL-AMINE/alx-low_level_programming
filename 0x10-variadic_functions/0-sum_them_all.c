#include "variadic_functions.h"

/**
 *sum_them_all - calculates the sum of all parameters
 *@n: 	number of arguments
 *@...: infinite arguments
 *Return:  sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int sum = 0;

	va_start(list, n);
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
