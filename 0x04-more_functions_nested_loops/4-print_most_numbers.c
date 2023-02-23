#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_most_numbers - main function
*
* Return: return value
*/

void print_most_numbers(void)
{
char digit = '0';
while (1)
{
if (digit > '9')
{
break;
}
else if (digit != '2' && digit != '4')
{
_putchar(digit);
}
digit++;
}
_putchar('\n');
}
