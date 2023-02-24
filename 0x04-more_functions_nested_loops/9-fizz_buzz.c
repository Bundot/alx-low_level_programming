#include <stdio.h>

/**
* print_number - function
* @num: print value
*
* print_fizz - function
*
* print_buzz - function
*
* print_fizzbuzz - function
* 
* Return: return value
*/

void print_number(int num);
void print_fizz();
void print_buzz();
void print_fizzbuzz();

int main()
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
print_fizzbuzz();
}
else if (i % 3 == 0)
{
print_fizz();
}
else if (i % 5 == 0)
{
print_buzz();
}
else
{
print_number(i);
}
i++;
}
puts("");
return (0);
}
void print_number(int num) {
char str[4];
int i = 0;
while (num > 0) {
str[i] = num % 10 + '0';
num /= 10;
i++;
}
while (i > 0) {
i--;
putchar(str[i]);
}
putchar(' ');
}
void print_fizz()
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar(' ');
}
void print_buzz()
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
void print_fizzbuzz()
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}

