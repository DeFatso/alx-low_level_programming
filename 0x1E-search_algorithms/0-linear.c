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
 * linear_search - searches for a value in an array of integers
 * @size: array size
 * @value: value
 * @array:pointer to the first element of the array to search in
 * Return: the index of the number
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (i > 0)
		{
			write(1, "", 2);
		}

		write(1, "Value checked array[", 20);
		print_number(i);
		write(1, "] = [", 5);
		print_number(array[i]);
		write(1, "]\n", 2);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
