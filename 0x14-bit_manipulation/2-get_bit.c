#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: parameter
 * @index: parameter
 * Return: returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;
	unsigned long int mask;

	bits = sizeof(unsigned long int) * 8;

	if (index >= bits)
	{
		return (-1);
	}
	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
