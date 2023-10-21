#include "main.h"
/**
 * binary - prints a binary number.
 * @val: arguments.
 * Return: Number of characters printed.
 */
int binary(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int flag = 0;
	int i;
	int cont = 0;
	int bit;

	for (i = 31; i >= 0; i--)
	{
		bit = (num >> i) & 1;
		if (bit || flag)
		{
			_putchar(bit + '0');
			cont++;
			flag = 1;
		}
	}

	if (cont == 0)
	{
		_putchar('0');
		cont = 1;
	}

	return (cont);
}
