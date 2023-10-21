#include "main.h"
/**
 * characters - this function prints a character.
 * @p : pointer variable.
 * Return:1.
 */
int characters(va_list p)
{
	char c;

	c = va_arg(p, int);
	_putchar(c);
	return (1);
}
