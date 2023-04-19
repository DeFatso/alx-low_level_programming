#include "function_pointers.h"
/**
 *int_index - searches for an int
 *@array: parameter
 *@size : size of array
 *@cmp : pointer to the function to be used to compare values
 * Return: returns the index of the first element
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array != NULL && cmp != NULL)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
			{
				return (x);
			}
		}
	}
	return (-1);
}
