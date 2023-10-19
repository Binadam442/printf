#include "main.h"
/**
 * _putchar - this function prints a character to stdout.
 * @c : character to print.
 * Return:1 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
