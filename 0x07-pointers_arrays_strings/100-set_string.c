#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* set_string - function
* @s: variable
* @to: variable
*
*
* Return: return value
*/

void set_string(char **s, char *to)
{
while ((*(*s)++ = *to++));
}
