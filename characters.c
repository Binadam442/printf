#include "main.h"
/**
 * characters - this function prints a character.
 * @p : pointer variable.
 * Return:1.
 */
int characters(va_list p)
{
	char chr;

	chr = va_arg(p, int);
	_putchar(chr);
	return (1);
}
