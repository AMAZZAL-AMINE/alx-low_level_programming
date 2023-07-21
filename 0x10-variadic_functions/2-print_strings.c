#include "variadic_functions.h"

/**
 *putstr - prints a string
 *@str: string to be printed
 *Return: void
 */

void putstr(char *str)
{
	int i = 0;

	if (!str)
		str = "(nil)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 *print_strings - prints strings, followed by a new line
 *@separator: string to be printed between strings
 *@n: number of strings passed to the function
 *@...: infinite arguments
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str;

	va_start(list, n);
	while (i < n)
	{
		str = va_arg(list, char *);
		putstr(str);
		if (separator != NULL && i < n - 1)
			putstr((char *)separator);
		i++;
	}
	va_end(list);
	_putchar('\n');
}
