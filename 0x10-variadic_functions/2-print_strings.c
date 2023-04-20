#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 *
 * @separator : parameter
 *
 * @n : parameter
 *
 * Return: returns nothing
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *c;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
	{

	}
	else
	{
		for (a = 0; a < n; ++a)
		{
			c = va_arg(list, char *);
			if (c == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s", c);
			}
			if (a != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(list);
	printf("\n");
}
