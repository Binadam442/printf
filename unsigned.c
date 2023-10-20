

#include "main.h"
/**
 * case_u - this function prints an unsigned int.
 * @p : int to print.
 * Return:a;
 */
int case_u(va_list p)
{
	unsigned int val, end, dig, f, a, temp;

	val = va_arg(p, unsigned int);
	end = val % 10, f = 1, a = 1;
	val = val / 10;
	temp = val;
	if (temp == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp != 0)
	{
		f = f * 10;
		temp = temp / 10;
	}
	temp = val;
	while (f > 0)
	{
		dig = temp / f;
		_putchar(dig + '0');
		temp = temp - (dig * f);
		f = f / 10;
		a++;
	}
	_putchar(end + '0');
	return (a);
}


