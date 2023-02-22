#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
*
* Return: return value
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
