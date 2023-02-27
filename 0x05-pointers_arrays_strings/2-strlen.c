#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strlen - main function
* @s: variable
*
* Return: return value
*/

#include <stdio.h>

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
