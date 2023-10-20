#include "main.h"

/**
 *binary - Converts an unsigned int to binary
 *@arg: Number to be converted to binary and printed.
 *Return: Number of bits printed.
 */


int binary(va_list arg)
{
	unsigned int b = va_arg(arg, unsigned int);
	int num = 0;
	unsigned int *arr;
	int a = 0;
	int numberofbits = 0;
	unsigned int temp = b;

	while (temp > 0)
	{
		temp /= 2;
		numberofbits++;
	}
	arr = malloc(numberofbits * sizeof(unsigned int));
	if (arr == NULL)
	{
		return (-1);
	}
	if (b == 0)
	{
		_putchar('0');
		num++;
	}
	else
	{
		while (b)
		{
			arr[a] = (b % 2);
			b /= 2;
			a++;
		}
		a--;
		while (a >= 0)
		{
			_putchar(arr[a] + '0');
			a--;
			num++;
		}
	}
	free(arr);
	return (num);
}
