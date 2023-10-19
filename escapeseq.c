#include "main.h"

/**
 * print_escaped_string - Print escaped strings.
 * @str: The format string.
 * Return: The number of characters printed.
 */
int print_escaped_string(const char *str)
{
	int count = 0;

	while (*str)
	{
	if (*str == '\\')
	{
	switch (*(str + 1))
	{
	case 'n':
                _putchar('\n');
		str += 2;
		count++;
		continue;
	default:
		_putchar(*str++);
		count++;
		continue;
	}
        }
        _putchar(*str++);
        count++;
	}

	return (count);
}

