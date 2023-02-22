#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
*
* Return: return value
*/

void print_alphabet(void)
{
char smallLetters = 'a';
while (smallLetters <= 'z')
{
putchar(smallLetters);
smallLetters++;
}
putchar('\n');
}
