#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* puts_half - main function
* @str: variable
*
* Return: return value
*/

void puts_half(char *str)
{
size_t len;
size_t offset;
if (str == NULL)
return;
len = strlen(str);
offset = (len + 1) / 2;
while (offset < len)
{
_putchar(str[offset]);
offset++;
}
_putchar('\n');
}
