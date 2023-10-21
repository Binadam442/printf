#include "main.h"
/**
 * string - this function prints a string.
 * @p : argument pointer variable.
 * Return: len (length of the string).
 */

int string(va_list p)
{
	int len;
	char *s;

	s = va_arg(p, char *);

	if (s == NULL || s[0] == '\0')
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
	len = 0;
	while (*s)
	{
		_putchar(*s);
		s++;
		len++;
	}
	return (len);
	}
}
