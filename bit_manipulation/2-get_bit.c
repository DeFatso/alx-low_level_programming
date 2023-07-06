#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: parameter
 * @index: pparameter
 * Return:  returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	size_t a = sizeof(unsigned long int) * 8;

	if (index >= a)
	{
		return (-1);
	}

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
