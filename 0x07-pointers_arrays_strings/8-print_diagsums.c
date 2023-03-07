#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* print_diagsums - function
* @a: variable
* @size: variable
*
*
* Return: return value
*/

void print_diagsums(int *a, int size)
{
int sum1;
int sum2;
int i;
int j;
char buffer;
sum1 = 0;
sum2= 0;
i = 0;
j = size -1;
while (i < size)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + j);
++i;
--j;
}
buffer[32];
snprintf(buffer, 32, "%d %d", sum1, sum2);
fwrite(STDOUT_FILENO, buffer, strlen(buffer));
}
