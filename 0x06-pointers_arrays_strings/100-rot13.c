#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * root13 - main function
 * @str: variable
 *
 * Return: return value
 */

char *rot13(char *str)
{
char *p = str;
while (*p) {
if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
*p += 13;
else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
*p -= 13;
p++;
}
return (str);
}
