#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_toupper - main function
 * @str: variable
 *
 * Return: return value
 */

char *string_toupper(char *str) {
char *a = str;
while (*a)
{
*a = (*a >= 'a' && *a <= 'z') ? (*a - 32) : *a;
a++;
}
return (str);
}
