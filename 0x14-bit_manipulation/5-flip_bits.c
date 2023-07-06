#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: parameter
 * @m: parameter
 * Return: returns bits count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int d;
	unsigned int c = 0;

	d = n ^ m;
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((d & (1UL << i)) != 0)
		{
			c++;
		}
	}

	return (c);
}

