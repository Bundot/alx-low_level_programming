#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _memcpy - prints the content of a buffer
* @s: variable
* @c: variable
*
*
* Return: void
*/

char *_strchr(char *s, char c)
{
while (*s != '\0' && *s != c)
{
s++;
}
if (*s == c)
{
return s;
}
else
{
return (NULL);
}
}
