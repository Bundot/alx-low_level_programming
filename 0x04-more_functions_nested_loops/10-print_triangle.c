#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_triangle - main function
* @size: variable
*
* Return: return value
*/

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
i = 1;
while (i <= size)
{
j = 1;
while (j <= i)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
