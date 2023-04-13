#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * malloc_checked - function
 *
 * Return: returns pointer
 *
 * @b: parameter
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	printf("%p\n", ptr);
	return (ptr);
}
