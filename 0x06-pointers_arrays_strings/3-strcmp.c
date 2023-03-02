#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* _strcmp - main function
* @s1: variable
* @s2: variable
*
* Return: return value
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return ((*s1 == *s2) ? 0 : (*s1 > *s2) ? 1 : -1);
}
