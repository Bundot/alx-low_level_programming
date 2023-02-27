#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* _atoi - main function
* @s: variable
*
* Return: return value
*/

int _atoi(char *s)
{
int sign;
int result;
if (s == NULL)
return (0);
sign = 1;
result = 0;
while (*s != '\0')
{
if (*s == '-')
{
sign = -1;
}
else if (*s == '+')
{
sign = 1;
}
else if (isdigit(*s))
{
result = result * 10 + (*s - '0');
}
else if (result > 0)
{
break;
}
s++;
}
return (result * sign);
}
