#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on incorrect number of arguments, 99 on invalid
 * operator, 100 on division/modulo by 0
 */

int main(int argc, char **argv)
{
	int (*f)(int, int), a, b;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (!f)
	{
		puts("Error");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
