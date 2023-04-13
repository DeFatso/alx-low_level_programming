#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - function
 * @max : parameter
 * @min : parameter
 * Return: returns array
 */
int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *array = malloc(size * sizeof(int));
	int i;

	if (min > max)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
