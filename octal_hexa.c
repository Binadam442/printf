#include "main.h"
/**
 *hexalower - this function converts ints to hexadecimal values.
 *@p : argument pointer.
 *Return:total (total number of chars printed on stdout.)
 */
int hexalower(va_list p)
{
	int *hexa;
	int a, total = 0;
	unsigned int c = va_arg(p, unsigned int), d = c;

	while (c / 16 != 0)
	{
		c = c / 16;
		total++;
	}
	total++;
	hexa = malloc(sizeof(int) * total);
	if (hexa == NULL)
	return (-1);
	a = 0;
	if (d == 0)
	{
		hexa[a] = 0;
		a++;
	}
	else
	{
	while (a < total)
	{
		hexa[a] = d % 16;
		d = d / 16;
		a++;
	}
	}
	a = total - 1;
	while (a >= 0)
	{
		if (hexa[a] > 9)
		{
			hexa[a] = hexa[a] + 39;
		}
		_putchar(hexa[a] + '0');
		a--;
	}
		free(hexa);
		return (total);
}
#include "main.h"
/**
 * hexaupper - this function converts ints to hexadecimal values.
 * @p : argument pointer.
 * Return:total (total number of chars printed on stdout.)
 */
int hexaupper(va_list p)
{
	int *hexa;
	int a, total = 0;
	unsigned int c = va_arg(p, unsigned int), d = c;

	while (c / 16 != 0)
	{
		c = c / 16;
		total++;
	}
	total++;
	hexa = malloc(sizeof(int) * total);
	if (hexa == NULL)
	{
		return (-1);
		a = 0;
	}
	if (d == 0)

	}	
		  hexa[a] = 0;
		a++;
	}
	else
	{
	
		while (a < total);
	}
	free(hexa);
	return (total);
}

#include "main.h"
/**
 *base_eight - this function converts decimal ints to base 8.
 *@p : argument pointer variable.
 *
 *Return:total(number of digits printed to stdout.)
 */
int base_eight(va_list p)
{
	int *octal;
	int a, total = 0;
	unsigned int c = va_arg(p, unsigned int), d = c;

	while (c / 8 != 0)
	{
		c = c / 8;
		total++;
	}
	total++;
	octal = malloc(sizeof(int) * total);
	if (octal == NULL)
		return (-1);
	/*now store the octal digits in the array*/
	a = 0;
	if (d == 0)
	{
		octal[a] = 0;
		a++;
	}
	else
	{
		while (a < total)
		{
			octal[a] = d % 8;
			d = d / 8;
			a++;
		}
	}
	/*now print octal in reverse*/
	a = total - 1;
	while (a >= 0)
	{
		_putchar(octal[a] + '0');
		a--;
	}
	free(octal);
	return (total);
}


