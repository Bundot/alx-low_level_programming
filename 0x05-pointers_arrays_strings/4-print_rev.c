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

void print_rev(char *s)
{
if (*s == '\0')
{
return;
}
_putchar('\n');
print_rev(s + 1);
_putchar(*s);
if (*(s + 1) == '\0')
{
return;
}
}
