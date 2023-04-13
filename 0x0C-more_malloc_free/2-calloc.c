#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array of nmemb elements
 * @nmemb : parameter
 * @size : parameter
 * Return: returns array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		exit(EXIT_FAILURE);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (arr);
}
