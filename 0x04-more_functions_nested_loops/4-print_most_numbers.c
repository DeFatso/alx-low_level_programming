#include "main.h"
/**
 * main - check the code
 *
 * print_most_numbers - function that prints numbers
 * Description: prints numbers exepe
 * print_most_numbers - prints numbers excludind 4 and 2
 *
 * Return : integers
 *
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
