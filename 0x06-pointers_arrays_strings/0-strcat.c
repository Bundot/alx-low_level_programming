#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcat - main function
 * @dest: variable
 * @src: variable
 *
 * Return: return value
 * */

char *_strcat(char *dest, char *src)
{
char *a = dest;
while (*a != '\0')
a++;
while (*a != '\0')
*a++ = *src++;
*a = '\0';
return (dest);
_putchar('\n');
}
