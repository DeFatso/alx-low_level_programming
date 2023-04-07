#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *
 * @c: parameter to be printed
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
	return (1);
	}
	return (0);
}
