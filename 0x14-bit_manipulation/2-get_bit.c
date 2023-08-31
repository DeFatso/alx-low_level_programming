#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: parameter
 * @index: index
 * Return: the value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	result = (n & mask) ? 1 : 0;
	return (result);
}
