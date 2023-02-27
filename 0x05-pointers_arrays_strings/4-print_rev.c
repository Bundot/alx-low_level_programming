#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* print_rev - main function
* @s: variable
*
* Return: return value
*/

void print_rev(char *s) {
if (*s != '\0')
{
print_rev(s + 1);
_putchar(*s);
}
else
{
_putchar('\n');
}
}
