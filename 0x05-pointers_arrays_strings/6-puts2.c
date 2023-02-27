#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* puts2 - main function
* @str: variable
*
* Return: return value
*/

void puts2(char *str)
{
int i;
if (str == NULL)
return;
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
