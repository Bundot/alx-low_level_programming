#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - main function
*
* Return: return
*/

int positive_or_negative(int i)
{
printf("%d ", i);
if (i > 0)
printf("is positive\n");
else if (i == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
