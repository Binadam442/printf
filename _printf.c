#include "main.h"
/**
 * _printf - this function produces output according to a format.
 * @format: this is the format string.
 * Return: chars (number of characters printed to stdout).
 */

int _printf(const char *format, ...)
{
		Specifiers Specify[] = {
		{"%c", characters}, {"%%", percent}, {"%s", string}, {"%d", case_d},
		{"%i", case_i},
		};
	va_list p;
	int chars, specifierFound = 0;
	size_t b;

	if (!format)
		return (-1);
	va_start(p, format), chars = 0;
	while (*format != '\0')
	{
		specifierFound = 0;
		for (b = 0; b < sizeof(Specify) / sizeof(Specify[0]); b++)
		{
			if (Specify[b].f[0] == format[0] && Specify[b].f[1] == format[1])
			{
				chars = chars + Specify[b].functionptr(p);
				format += 2;
				specifierFound += 1;
				break;
			}

		}
		if (!specifierFound)
		{
		_putchar(*format++);
		chars++;
		}
	}
	va_end(p);
	return (chars);
}
