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
	int a, b;
	char *op;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	if (op[1])
	{
		printf("Error\n");
		exit(99);
	}
	b = atoi(argv[3]);
	operation = get_op_func(op);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(a, b));
	return (0);
}
