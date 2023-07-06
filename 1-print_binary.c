#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int i, size, zero;
	unsigned long int mask;

	mask = 1UL << (size - 1);
	size = sizeof(unsigned long int) * 8;
	zero = 1;

	for (i = 0; i < size; i++)
	{
		if ((n & mask) != 0)
		{
			zero = 0;
			_putchar ('1');
		}
		else if (!zero)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (zero)
	{
		_putchar ('0');
	}
}
