#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * Return: 0
 */

int	main(void)
{
  int	i = 1;

  while (i <= 100)
  {
    if (i % 3 == 0)
      printf("Fizz");
    if (i % 5 == 0)
      printf("Buzz");
    if (i % 3 != 0 && i % 5 != 0)
      printf("%d", i);
    if (i != 100)
      printf(" ");
    i++;
  }
  printf("\n");
  return (0);
}
