#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - main function
 * @n: variable
 *
 * Return: return value
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
_putchar(n % 10 + '0');
}
