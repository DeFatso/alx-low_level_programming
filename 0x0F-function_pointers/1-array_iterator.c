#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array : is a pointer to an array
 * @size : size of array
 * @action : is a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
