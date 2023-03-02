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
char *s = str;
while (*s != '\0')
{
int delta = (*s >= 'a' && *s <= 'z') ? 13 : (*s >= 'A' && *s <= 'Z') ? 13 : 0;
*s = (*s >= 'a' && *s <= 'z') ? ((*s - 'a' + delta) % 26) + 'a' : (*s >= 'A' && *s <= 'Z') ? ((*s - 'A' + delta) % 26) + 'A' : *s;
s++;
}
return (str);
}
