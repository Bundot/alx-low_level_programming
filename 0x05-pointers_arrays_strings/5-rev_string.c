#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* rev_string - main function
* @s: variable
*
* Return: return value
*/


void rev_string(char *s)
{
char *end;
if (s == NULL) return;
end = s + strlen(s) - 1;
while (s < end)
{
char temp = *s;
*s++ = *end;
*end-- = temp;
}
}
