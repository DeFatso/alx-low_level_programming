#include <stdio.h>
#include "string.h"
/**
 *print_message - prints message
 *
 *Return: returns noting
 *
 */
void __attribute__((constructor)) print_message(void)
{
printf("You're beat! and yet, you must allow,");
printf("\nI bore my house upon my back!\n");
}
