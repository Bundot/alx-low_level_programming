#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _puts_recursion - function
* @s: variable
*
*
* Return: return value
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
