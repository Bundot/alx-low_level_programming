#include <unistd.h>

/**
 * _putchar - writes the letter or number to be printed to  stdout
 * 
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately. Read More on This
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
