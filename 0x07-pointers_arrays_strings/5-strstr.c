#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strstr - function
* @haystack: variable
* @needle: variable
*
*
* Return: return value
*/

char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
