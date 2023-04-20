#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - prints characters
 * @format: parameter
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int a = 0;
	char c;
	int i;
	float f;
	char *s;

	va_list list;

	va_start(list, format);

	while (a < strlen(format))
	{
		switch (format[a])
		{
			case 'c':
				c = va_arg(list, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(list, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(list, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			default:
				break;
		}

		if (a < strlen(format) - 1)
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");
}
