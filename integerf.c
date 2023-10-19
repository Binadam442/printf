#include "main.h"



/**
 *case_d - print base 10
 *@args: decimal to print
 *Return: base 10
 */

int case_d(va_list args)
{
	unsigned int val;
	int num = va_arg(args, int);
	int f = 1;
	int count = 0;

	if (num < 0)
	{
		val = num * -1;
		count += _putchar('-');
	}
	else
	{
		val = num;
	}

	for (; val / f > 9; )
	{
		f *= 10;
	}
	for (; f != 0; )
	{
		count += _putchar((val / f) + '0');
		val %= f;
		f /= 10;
	}

	return (count);
}

