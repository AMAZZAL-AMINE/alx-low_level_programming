#include <stdio.h>

/**
 * 0-putchar.c - print _putchar followed by a new line.
 * Description: use write to stdout to print _putchar.
 * Return: 0
 */

int main() {
	char	*str;
	int	count;

	count = 0;
	str = "_putchar\n";
	while (str[count] != '\0') {
		putchar(str[count]);
		count++;
	}
	return (0);
}
