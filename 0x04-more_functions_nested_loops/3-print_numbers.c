#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_numbers - main function
*
* Return: return value
*/

void print_numbers(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
_putchar(digit);
}
_putchar('\n');
}
