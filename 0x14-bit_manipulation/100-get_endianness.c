#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int value = 1;
	unsigned char *byte = (unsigned char *) &value;

	return ((int)(*byte));
}

