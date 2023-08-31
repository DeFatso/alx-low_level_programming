#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: parameter
 * @m: parameter
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int num_bits = 0;
	int i;
	size_t p;

	p = sizeof(unsigned long int) * 8;
	for (i = 0; i < p; i++;)
	{
		num_bits += (xor_result >> i) & 1;
	}
	return (num_bits);
}
