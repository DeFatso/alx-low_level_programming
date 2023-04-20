#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds numbers
 *
 * @n : parameter
 *
 * Return: returns the sum of provided arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	int sum;

	va_start(list, n);

	sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
	for (a = 0; a < n; ++a)
	{
		sum = sum + va_arg(list, int);
	}

	va_end(list);
	return (sum);
	}
}
