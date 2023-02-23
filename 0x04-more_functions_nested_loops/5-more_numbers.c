#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* more_numbers - main function
*
* Return: return value
*/

void more_numbers(void)
{
int i = 0, j;
while (i < 10)
{
j = 0;
while (j <= 14)
{
if (j > 9)
{
_putchar(j / 10 + '0');
}
_putchar(j % 10 + '0');
j++;
}
_putchar('\n');
i++;
}
}
