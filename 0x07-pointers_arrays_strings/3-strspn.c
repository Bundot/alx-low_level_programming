#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strspn - function
* @s: variable
* @accept: variable
*
*
* Return: return value
*/

unsigned int _strspn(char *s, char *accept)
{
char *p;
char *a;
if (*s == '\0')
{
return (0);
}
if (*accept == '\0')
{
return (0);
}
p = s;
while (*p) 
{
a = accept;
while (*a && *a != *p)
{
++a;
}
if (!*a)
{
break;
}
++p;
}
return (p - s);
}
