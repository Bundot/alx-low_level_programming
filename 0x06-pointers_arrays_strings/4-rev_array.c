#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_array - main function
 * @a: variable
 * @n: variable
 *
 * Return: return value
 */

void reverse_array(int *a, int n)
{
int *left = a;
int *right = a + n - 1;
while (left < right)
{
int temp = *left;
*left++ = *right;
*right-- = temp;
}
}
