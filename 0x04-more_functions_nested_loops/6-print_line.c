#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_line - main function
* @n: The variable
*
* Return: return value
*/

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
_putchar('_');
print_line(n-1);
}
