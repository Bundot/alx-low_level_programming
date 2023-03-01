#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strncpy - main function
 * @dest: variable
 * @src: variable
 * @n: variable
 *
 * Return: return value
 * */

char *_strncpy(char *dest, char *src, int n)
{
char *dest_end = dest + n;
while (*src != '\0' && dest < dest_end)
{
*dest++ = *src++;
}
while (dest < dest_end)
{
*dest++ = '\0';
}
return (dest - n);
}
