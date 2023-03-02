#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* _strcmp - main function
* @n1: variable
* @n2: variable
* @r: variable
* @size_r: variable
*
* Return: return value
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int i = 0;
int digit;
int digit1;
int digit2;
int sum;
while (*n1 != '\0' || *n2 != '\0' || carry != 0)
{
digit1 = (*n1 != '\0') ? *n1 - '0' : 0;
digit2 = (*n2 != '\0') ? *n2 - '0' : 0;
sum = digit1 + digit2 + carry;
carry = (sum >= 10) ? 1 : 0;
digit = sum % 10;
if (i >= size_r - 1)
{
return (0);
}
r[i++] = digit + '0';
n1++;
n2++;
}
r[i] = '\0';
return (r);
}
