#include "main.h"
/**
 * _strlen_recursion - prints string
 * Return: returns strlen
 * @s : parameter
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
