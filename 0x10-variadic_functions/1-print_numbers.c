#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 *
 * @n : parameter
 *
 * @separator : parametter
 *
 * Return: returns 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;

	va_start(list, n);

	if (separator == 0)
	{

	}

	for (a = 0; a < n; ++a)
	{
		printf("%d", va_arg(list, int));
		if (a != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
