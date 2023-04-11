#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array
 * @size : parameter
 * @c : parameter
 * Return: returns zero
 */
char *create_array(unsigned int size, char c)
{
	char *charArray;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	charArray = (char *)malloc(size * sizeof(char));
	if (charArray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		charArray[i] = c;
	}
	return (charArray);
}
