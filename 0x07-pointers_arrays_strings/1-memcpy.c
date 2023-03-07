#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _memcpy - prints the content of a buffer
* @dest: variable
* @src: variable
* @n: variable
*
*
* Return: void
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d;
char *s;
if (n == 0)
{
return (dest);
}
d = dest;
s = src;
while (n > 0)
{
*d = *s;
d++;
s++;
n--;
}
return (dest);
}
