#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strpbrk - function
* @s: variable
* @accept: variable
*
*
* Return: return value
*/

char *_strpbrk(char *s, char *accept)
{
char *p;
if(!s || !accept)
return (NULL);
while (*s != '\0')
{
p = accept;
while (*p != '\0')
{
if (*s == *p)
{
return (s);
}
++p;
}
++s;
}
return (NULL);
}
