#include <stdio.h>
#include <stdlib.h>

/**
* _isalpha - main function
* @c: print value
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
