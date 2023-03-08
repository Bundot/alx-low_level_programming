#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <math.h>

/**
* is_palindrome - function
* @s: variable
*
*
* Return: return value
*/

int is_palindrome(char *s)
{
int len;
int i;
i = 0;
len = strlen(s);
while (i < len / 2)
{
if (s[i] != s[len - i - 1])
{
return (0);
}
i++;
}
return (1);
}
