#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * leet - main function
 * @str - variable
 *
 * Return: return value
 */

char *leet(char *str)
{
char *ptr = str;
char *leet_chars = "aAeEoOtTlL";
char *leet_nums = "4433007711";
int i;
while (*ptr)
{
i = 0;
while (leet_chars[i])
{
if (*ptr == leet_chars[i])
*ptr = leet_nums[i];
i++;
}
ptr++;
}
return (str);
}
