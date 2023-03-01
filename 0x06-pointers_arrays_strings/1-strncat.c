#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - main function
 * @dest - variable
 * @src - variable
 * @n - variable
 *
 * Return: return function
 **/

char *_strncat(char *dest, char *src, int n)
{
int dest_len = strlen(dest);
char *dest_end = dest + dest_len;
char *src_end = src + strnlen(src, n);
while (src < src_end)
{
*dest_end++ = *src++;
}
*dest_end = '\0';
return (dest);
}
