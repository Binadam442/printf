#include "main.h"

/**
 *binary - Converts an unsigned int to binary
 *@arg: Number to be converted to binary and printed.
 *Return: Number of bits printed.
 */


int binary(va_list arg)
{
	int *arr, a, count;
	unsigned int num = va_arg(arg, unsigned int);
	int temp = num;
	int numberofbits = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp > 0)
	{
		temp /= 2;
		numberofbits++;
	}
	arr = malloc(numberofbits * sizeof(int));
	if (arr == NULL)
	{
		return (-1);
	}
	for (a = 0; num > 0; a++)
	{
		arr[a] = num % 2;
		num /= 2;
	}
	count = 0;
	for (a = numberofbits - 1; a >= 0; a--)
	{
		_putchar(arr[a] + '0');
		count++;
	}
	free(arr);
	return (count);
}
