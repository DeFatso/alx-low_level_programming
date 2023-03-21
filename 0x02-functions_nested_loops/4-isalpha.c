#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: parameter that prints the return values
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 65 && c < 123)
	{
		return (1);
	}
	return (0);
}
