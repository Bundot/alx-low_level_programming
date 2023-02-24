#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_square - main function
* size: variable
*
* Return: return value
*/

void print_square(int size)
{
int i;
int j;
i = 0;
if (size < 1)
_putchar('\n');
while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
