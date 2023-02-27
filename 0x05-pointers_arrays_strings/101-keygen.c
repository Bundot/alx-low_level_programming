#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define PASSWORD_LENGTH 10

/**
* generate_password - main function
* @password: variable
*
* Return: return value
*/

void generate_password(char *password)
{
int putchar();
srand(time(NULL));
int i = 0;
while (i < PASSWORD_LENGTH)
{
password[i++] = 'A' + rand() % 26;
}
password[i] = '\0';
}
int main()
{
char password[PASSWORD_LENGTH + 1];
generate_password(password);
int i = 0;
while (i < PASSWORD_LENGTH + 1)
{
putchar(password[i++]);
}
putchar('\n');
return (0);
}
