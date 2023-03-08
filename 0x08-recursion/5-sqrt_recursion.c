#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _sqrt_recursion - function
* @n: variable
*
*
* Return: return value
*/

int _sqrt_recursion(int n)
{
int sqrt_prev;
int sqrt_curr;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return 0;
}
else
{
sqrt_prev = _sqrt_recursion(n / 4);
sqrt_curr = sqrt_prev * 2 + (n >= (sqrt_prev * 2 + 1)) - (n >= (sqrt_prev * 4 + 3));
return ((sqrt_curr * sqrt_curr == n) ? sqrt_curr : -1);
}
}
