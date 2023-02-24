#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_diagonal - main function
* @n: variable
*
* Return: return value
*/

void print_diagonal(int n)
{
int i;
int j;

if (n <= 0)
{
_putchar('\n');
return;
}
while (i < n)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
}
