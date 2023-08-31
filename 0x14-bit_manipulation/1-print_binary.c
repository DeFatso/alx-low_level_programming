#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	unsigned long int result;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	result = n & 1;
	_putchar(result + '0');
}
