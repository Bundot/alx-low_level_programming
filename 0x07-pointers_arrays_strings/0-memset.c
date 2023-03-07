#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _memset - prints the content of a buffer
* @s: variable
* @b: variable
* @n: variable
*
*
* Return: void
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *p;
if (n == 0)
{
return(s);
}
p = s;
i = 0;
while (i < n)
{
*p = b;
p++;
i++;
}
return(s);
}
