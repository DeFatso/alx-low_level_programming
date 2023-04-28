#include "main.h"
#include "string.h"
/**
 * is_palindrome - checks if string is_palindrome
 *
 * @s: parameter
 *
 * Return: returns zero
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	if (s[0] == s[len - 1])
	{
		return (is_palindrome(s + 1));
	}
	return (0);
}
