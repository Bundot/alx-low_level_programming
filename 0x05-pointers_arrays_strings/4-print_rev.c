#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
print_rev(s + 1);
putchar(*s);
if (*(s + 1) == '\0')
{
putchar('\n');
return;
}
}
