#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pparameter
 * @index: parameter
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;
	unsigned long int mask;

	bits = sizeof(unsigned long int) * 8;
	if (index >= bits)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}


