#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	return ((int)(*byte));
}
