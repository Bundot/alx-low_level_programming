#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - main function
 * @str: variable
 *
 * Return: return value
 */

char *cap_string(char *str)
{
char *ptr = str;
int capitalize_next = 1;
while (*ptr)
{
if (isspace(*ptr) || ispunct(*ptr))
{
capitalize_next = 1;
}
else if (capitalize_next)
{
*ptr = toupper(*ptr);
capitalize_next = 0;
}
ptr++;
}
return (str);
}
