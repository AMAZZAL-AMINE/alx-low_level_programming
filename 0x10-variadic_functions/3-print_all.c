#include "variadic_functions.h"

/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 *@...: infinite arguments
 *Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *str;

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
