#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function
 * @old_size : parameter
 * @new_size : parameter
 * @ptr : parameter
 * Return: returns array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt, *opt;
	unsigned int i;

	pt = malloc(new_size);
	opt = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	if (!pt)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			pt[i] = opt[i];
		}
	}
	free(ptr);
	return (pt);
}
