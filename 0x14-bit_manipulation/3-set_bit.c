#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: parameter
 * @index: parameter
 * Return: returns 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;
	unsigned long int mask;

	bits = sizeof(unsigned long int) * 8;
	if (index >= bits)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
