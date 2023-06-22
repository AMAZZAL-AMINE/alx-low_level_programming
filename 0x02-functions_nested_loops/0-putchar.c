#include <unistd.h>

/**
 * 0-putchar.c - print _putchar followed by a new line.
 * Description: use write to stdout to print _putchar.
 * Return: 0
 */

int main() {
	char *str;

	str = "_putchar\n";
	while (*str)
	{
		writes(1, str, 1);
		str++;
	}
	return (0);
}