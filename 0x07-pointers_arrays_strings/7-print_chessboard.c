#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_row - function
* @(a)[8]: variable
* @row: variable
*
*
* Return: return value
*/

void print_row(char (*a)[8], int row)
{
if (row < 8)
{
_putchar(a[row][0]);
print_row(a, row + 1);
_putchar('\n');
}
}

/**
* print_chessboard - function
* @(*a)[8]: variable
*
*
* Return: return value
*/

void print_chessboard(char (*a)[8])
{
if (a != NULL)
{
_putchar(a[0][0]);
print_row(a, 1);
}
}
