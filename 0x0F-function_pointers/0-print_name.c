#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints name
 * @name: string pointr
 *
 */
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
