#include <stdio.h>
#include <stdlib.h>

/**
* swap_int - main function
* @a: variable
* @b: variable
*
* Return: return value
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
