#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strcpy - main function
* @dest: variable
* @src: variable
*
* Return: return value
*/

char *_strcpy(char *dest, char *src)
{
if (dest == NULL || src == NULL)
return (NULL);
return strncpy(dest, src, strlen(src) + 1);
}
