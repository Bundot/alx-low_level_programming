#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
*
* Return: return value
*/

void print_alphabet_x10(void) {
  char c;
  int i;
  for (i = 0; i < 260; i++) {
    c = 'a' + (i % 26);
    putchar(c);
    if (i % 26 == 25) {
      putchar('\n');
    }
  }
}
