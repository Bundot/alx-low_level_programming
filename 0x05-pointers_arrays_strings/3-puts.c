#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _puts - main function
* @str: variable
*
* Return: return value
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
