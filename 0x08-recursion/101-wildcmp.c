#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <math.h>

/**
* wildcmp - function
* @s1: variable
* @s2: variable
*
*
* Return: return value
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
{
return (1);
}
while (*s1 != '\0')
{
if (wildcmp(s1, s2 + 1))
{
return (1);
}
s1++;
}
return (0);
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
