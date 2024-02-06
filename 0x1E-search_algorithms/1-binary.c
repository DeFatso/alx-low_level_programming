#include "search_algos.h"
#include "search_algos.h"
/**
 * print_number - prints numbers
 * @num: number to print
 */
void print_number(int num)
{
	char digit;

	if (num == 0)
	{
		write(1, "0", 1);
		return;
	}

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}

	digit = num % 10 + '0';
	write(1, &digit, 1);
}
/**
 * print_array - prints the array
 * @array:pointer to the first element of the array to search in
 * @left: left side
 * @right: right side
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	if (left <= right)
	{
		write(1, "Searching in array: ", 20);

		for (i = left; i <= right; i++)
		{
			if (i > left)
			{
				write(1, ", ", 2);
			}

			print_number(array[i]);
		}

		write(1, "\n", 1);
	}
}
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: s the number of elements in array
 * @value: the value to search for
 * Return: the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	int found = -1;

	if (array == NULL)
	{
		return (-1);
	}
	print_array(array, left, right);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			found = mid;
			break;
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
		print_array(array, left, right);
	}
	print_array(array, left, right);
	if (found != -1)
	{
		write(1, "Found ", 6);
		print_number(value);
		write(1, " at index: ", 11);
		print_number(found);
		write(1, "\n", 1);
		return (found);
	}
	return (-1);
}
