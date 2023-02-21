#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - main function
*
* Return: return value
*/

void print_alphabet(void)
{
char c = 'a';  
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
