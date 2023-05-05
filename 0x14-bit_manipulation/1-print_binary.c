#include "main.h"

/**
 * print_binary - prints the binary representation of a given unsigned long int
 * @num: number to be converted to binary and printed
 */
void print_binary(unsigned long int num)
{
	int i, count = 0;
	unsigned long int bit_mask;

	for (i = 63; i >= 0; i--)
	{
		bit_mask = num >> i;

		if (bit_mask & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
	{
		_putchar('0');
	}
}
