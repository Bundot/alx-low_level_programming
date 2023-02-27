#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_array - main function
* @a: variable
* @n: variable
*
* Return: return value
*/

void print_array(int *a, int n)
{
int i;
if (a == NULL || n <= 0)
return;
printf("%d", a[0]);
i = 1;
while (i < n)
{
printf(", %d", a[i]);
i++;
}
printf("\n");
}
