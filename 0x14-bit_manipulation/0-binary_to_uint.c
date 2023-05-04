#include "main.h"
/**
 * binary_to_uint -converts binary to unsigned int
 * @b: parameter
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	size_t i, length = strlen(b);

	for (i = 0; i < length; i++)
	{
		if (b[i] == '1')
		{
			result += 1 << (length -i - 1);
		}
	}
	return (result);
}
