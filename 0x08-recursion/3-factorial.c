#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* factorial - function
* @n: variable
*
*
* Return: return value
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
