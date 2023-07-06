#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int i, j, k, l, m, n, sum, carry;

  i = j = k = l = carry = 0;
  while (n1[i] != '\0')
    i++;
  while (n2[j] != '\0')
    j++;
  if (i + 2 > size_r || j + 2 > size_r)
    return (0);
  i--;
  j--;
  while (i >= 0 || j >= 0)
  {
    m = n1[i] - '0';
    n = n2[j] - '0';
    sum = carry + m + n;
    if (sum >= 10)
    {
      carry = sum / 10;
      sum %= 10;
    }
    else
      carry = 0;
    r[k++] = sum + '0';
    i--;
    j--;
  }
  if (carry > 0)
    r[k++] = carry + '0';
  r[k] = '\0';
  k--;
  while (l < k)
  {
    carry = r[l];
    r[l] = r[k];
    r[k] = carry;
    l++;
    k--;
  }
  return (r);
}
