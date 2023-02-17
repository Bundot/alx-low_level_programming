#include <stdio.h>

/**
* main - main function
*
* Return: return value
*/

int main(void)
{
for (int i = 0; i < 10; i++)
{
for (int j = i + 1; j < 10; j++)
{
for (int k = j + 1; k < 10; k++)
{
if (i != j && i != k && j != k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}
